# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/11 08:52:05 by dnunez-m          #+#    #+#              #
#    Updated: 2022/03/16 17:40:23 by dnunez-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	@gcc -Wall -Wextra -Werror server.c -o server
	@gcc -Wall -Wextra -Werror client.c -o client

clean:
	@rm -f server
	@rm -f client

fclean: clean

re: fclean all

bonus: fclean
	@gcc -Wall -Wextra -Werror server_bonus.c -o server
	@gcc -Wall -Wextra -Werror client_bonus.c -o client
	
.PHONY:		all bonus clean fclean re