CFLAGS 	= -Wall -Wextra -Werror

SRCS 	= so_long.c
		
SRCS_B 	= 

OBJS 	= ${SRCS:.c=.o}

OBJS_B 	= ${SRCS_B:.c=.o}

NAME 	= so_long.a

RM 		= rm -f

.c.o:	
	make -C libft
	make -C mlx
	gcc -c ${CFLAGS} -Imlx $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}
			gcc ${CFLAGS} -Lmlx -lmlx -framework OpenGL -framework AppKit libft/libft.a mlx/libmlx.a ${NAME} -o so_long

bonus:		${OBJS_B}
			ar rc ${NAME} ${OBJS_B}
			gcc ${CFLAGS} -Lmlx -lmlx -framework OpenGL -framework AppKit libft/libft.a mlx/libmlx.a ${NAME} -o so_long

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
