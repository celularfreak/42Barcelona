# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/13 10:32:52 by dnunez-m          #+#    #+#              #
#    Updated: 2023/02/01 10:24:48 by dnunez-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	= src/push_swap.c src/argv_check.c src/init_stacks.c \
			src/sort_stack.c src/check_order.c src/select_algorithm.c \
			src/pa.c src/pb.c src/ra.c src/rb.c src/rr.c src/rra.c src/rrb.c \
			src/rrr.c src/sa.c src/sb.c src/ss.c src/swap_values.c src/sort_two.c \
			src/sort_three.c src/sort_max_five.c src/sort_big.c\
			
CFLAGS 	= -Wall -Wextra -Werror -MMD -fsanitize=address

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
