# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/13 10:32:52 by dnunez-m          #+#    #+#              #
#    Updated: 2022/09/23 13:05:27 by dnunez-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	= src/push_swap.c src/argv_check.c src/init_stacks.c \
			src/index_stack.c

CFLAGS 	= -Wall -Wextra -Werror -MMD 

OBJS 	= ${SRCS:.c=.o}

NAME 	= push_swap

HEADER	= include/

RM 		= rm -f

CC 		= gcc

DEPS = $(addsuffix .d, $(basename $(OBJS)))

src/%.o:src/%.c
	${CC} -c ${CFLAGS} -I ${HEADER} -I libft/ $< -o $@
	
all:	libs ${NAME} 

-include $(DEPS)

${NAME}:	${OBJS} 
			${CC} ${CFLAGS} -L libft/ ${OBJS} -o ${NAME} -lft

libs: 
	make -C ./libft/

clean:
			${RM} ${OBJS} ${DEPS}
			make clean -C libft

fclean:		clean 
			${RM} ${NAME} 
			make fclean -C libft
			
re:			fclean all

.PHONY:		all clean fclean re
