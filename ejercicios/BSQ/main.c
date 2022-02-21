#include "header.h"
#include "read.h"

int main(int argc, char **argv)
{
	struct s_map_config map_config;
	int					**arr;
	int					i;
	int					j;
	int					it;
	struct s_result		result;

	i = 0;
	j = 0;
	it = 1;
	if (argc < 1)
		return (0);
	while (argv[it])
	{
		map_config = readfile(argv[it]);
		it++;
	}
	arr = make_array(map_config);
	while (i < map_config.lines)
	{
		printf("%d", arr[i][j]);
		i++;
		if (i == map_config.lines)
		{
			printf("\n");
			j++;
			i = 0;
			if (j == map_config.cols)
				break;
		}
	}
}
