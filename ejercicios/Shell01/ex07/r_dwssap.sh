#!/bin/sh
cat -e /etc/passwd | grep -v '#' | sed 's/\:.*$//' | sed '1d;n;d' | rev | sort -r | awk -v "line_start=$FT_LINE1" -v "line_end=$FT_LINE2" 'NR==line_start, NR==line_end' | paste -sd, - | sed 's/,/, /g' | sed 's/$/./' | tr -d '\n'
