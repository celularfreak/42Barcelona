# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/13 10:32:52 by dnunez-m          #+#    #+#              #
#    Updated: 2022/09/19 11:31:29 by dnunez-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	= ./src/push_swap.c

CFLAGS 	= -Wall -Wextra -Werror -MMD

OBJS 	= ${SRCS:.c=.o}

NAME 	= push_swap

HEADER	= ./include/push_swap.h

RM 		= rm -f

DEPS = $(addsuffix .d, $(basename $(OBJS)))

all:		libs ${NAME} 

-include $(DEPS)

${NAME}:	${OBJS} ${HEADER}
			gcc ${CFLAGS} libft/libft.a ${OBJS} -o ${NAME}

libs: 
	make -C ./libft

.c.o:	
	gcc -c ${CFLAGS} -I ./include/ $< -o ${OBJS}

clean:
			${RM} ${OBJS} ${DEPS}
			make clean -C libft

fclean:		clean 
			${RM} ${NAME} 
			make fclean -C libft

re:			fclean all

.PHONY:		all clean fclean re
