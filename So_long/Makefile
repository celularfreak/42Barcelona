# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/13 10:32:52 by dnunez-m          #+#    #+#              #
#    Updated: 2022/07/14 12:14:06 by dnunez-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	= so_long.c \
			./srcs/map_conv.c \
			./srcs/map_test.c \
			./srcs/images.c \
			./srcs/movements.c\
			./srcs/movements_extra.c\
			./get_next_line/get_next_line.c \
			./get_next_line/get_next_line_utils.c \

CFLAGS 	= -Wall -Wextra -Werror

OBJS 	= ${SRCS:.c=.o}

NAME 	= so_long

HEADER	= so_long.h

RM 		= rm -f


all:		libs ${NAME} 

${NAME}:	${OBJS} ${HEADER}
			gcc ${CFLAGS} -Lmlx -lmlx -framework OpenGL -framework AppKit Printf/libftprintf.a libft/libft.a mlx/libmlx.a ${OBJS} -o ${NAME}

libs: 
	make -C ./Printf
	make -C ./libft
	make -C mlx

.c.o:	
	
	gcc -c ${CFLAGS} -Imlx $< -o ${<:.c=.o}

clean:
			${RM} ${OBJS} ${OBJS_B}
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
