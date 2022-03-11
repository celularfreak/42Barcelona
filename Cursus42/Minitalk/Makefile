# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/11 08:52:05 by dnunez-m          #+#    #+#              #
#    Updated: 2022/03/11 16:26:09 by dnunez-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS 	= -Wall -Wextra -Werror

SRCS_C 	= client.c minitalk_utils.c

SRCS_S 	= server.c

OBJS_C 	= ${SRCS_C:.c=.o}

OBJS_S 	= ${SRCS_S:.c=.o}

NAME	= minitalk

NAME_C 	= client

NAME_S 	= server

RM 		= rm -f

.c.o:	
	gcc -c ${CFLAGS} $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS_C} ${OBJS_S}
			ar rc ${NAME_C} ${OBJS_C}
			ar rc ${NAME_S} ${OBJS_S}

clean:
			${RM} ${OBJS_C}
			${RM} ${OBJS_S}
			
fclean:		clean
			${RM} ${NAME}
re:			fclean all

.PHONY:		all clean fclean re