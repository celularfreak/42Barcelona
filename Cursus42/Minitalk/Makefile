# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/11 08:52:05 by dnunez-m          #+#    #+#              #
#    Updated: 2022/03/11 09:03:05 by dnunez-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES_S = ft_server.c

OBJS = $(FILES_S:.c=.o)

FILES_C = ft_client.c ft_utils.c

OBJS_C = $(FILES_B:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME1 = client
NAME2 = server
.c.o: ${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
server:			$(NAME1)

$(NAME):		$(OBJS)
				ar rcs $(NAME1) $(OBJS)

client: 		$(OBJS) $(OBJS_C)
				ar rcs $(NAME2) $(OBJS_C)			

clean:
				$(RM) $(OBJS) $(OBJS_C)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all bonus clean fclean re