# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/13 10:32:52 by dnunez-m          #+#    #+#              #
#    Updated: 2022/07/22 12:41:14 by dnunez-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	= so_long.c \
			./src/map_conv.c \
			./src/map_test.c \
			./src/images.c \
			./src/movements.c\
			./src/movements_extra.c\
			./get_next_line/get_next_line.c \
			./get_next_line/get_next_line_utils.c \


CFLAGS 	= -Wall -Wextra -Werror -MMD

OBJS 	= ${SRCS:.c=.o}

NAME 	= so_long

HEADER	= so_long.h

RM 		= rm -f

DEPS = $(addsuffix .d, $(basename $(SRCS)))

all:		libs ${NAME} 

-include $(DEPS)

${NAME}:	${OBJS} ${HEADER}
			gcc ${CFLAGS} -Lmlx -lmlx -framework OpenGL -framework AppKit Printf/libftprintf.a libft/libft.a mlx/libmlx.a ${OBJS} -o ${NAME}

libs: 
	make -C ./Printf
	make -C ./libft
	make -C mlx

.c.o:	
	
	gcc -c ${CFLAGS} -Imlx $< -o ${<:.c=.o}

clean:
			${RM} ${OBJS} ${DEPS}
			make clean -C libft
			make clean -C mlx
			make clean -C Printf

fclean:		clean 
			${RM} ${NAME} 
			make fclean -C libft
			make clean -C mlx
			make fclean -C Printf

re:			fclean all

.PHONY:		all clean fclean re
