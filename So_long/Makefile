# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/13 10:32:52 by dnunez-m          #+#    #+#              #
#    Updated: 2022/06/03 15:02:32 by dnunez-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	= so_long.c map_conv.c images.c\
./get_next_line/get_next_line.c \
./get_next_line/get_next_line_utils.c \

CFLAGS 	= -Wall -Wextra -Werror

OBJS 	= ${SRCS:.c=.o}

NAME 	= so_long

RM 		= rm -f

.c.o:	
	make -C libft
	make -C mlx
	gcc -c ${CFLAGS} -Imlx $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS} so_long.h
			gcc ${CFLAGS} -Lmlx -lmlx -framework OpenGL -framework AppKit libft/libft.a mlx/libmlx.a ${OBJS} -o ${NAME}

clean:
			${RM} ${OBJS} ${OBJS_B}
			make clean -C libft
			make clean -C mlx

fclean:		clean
			${RM} ${NAME}
			make fclean -C libft
			make clean -C mlx

re:			fclean all

.PHONY:		all clean fclean re
