# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/13 10:32:52 by dnunez-m          #+#    #+#              #
#    Updated: 2022/09/19 14:02:09 by dnunez-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	= ./src/push_swap.c \

CFLAGS 	= -Wall -Wextra -Werror

OBJS 	= ${SRCS:.c=.o}

NAME 	= push_swap

HEADER	= ./include/push_swap.h

RM 		= rm -f

DEPS = $(addsuffix .d, $(basename $(OBJS)))

%.o: %.c
	gcc -c ${CFLAGS} -MMD -I ./include/ -I ./libft/ $< -o ${OBJS}
	
all:		libs ${NAME} 

-include $(DEPS)

${NAME}:	${OBJS} ${HEADER}
			gcc ${CFLAGS} -L libft/ ${OBJS} -o ${NAME} -lft

libs: 
	make -C ./libft/

clean:
			${RM} ${OBJS} ${DEPS}
			make clean -C libft

fclean:		clean 
			${RM} ${NAME} 
			
re:			fclean all

.PHONY:		all clean fclean re
