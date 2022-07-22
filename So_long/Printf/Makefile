# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/09 13:01:31 by dnunez-m          #+#    #+#              #
#    Updated: 2022/07/22 12:41:12 by dnunez-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = ./srcs/ft_printf.c ./srcs/ft_putcent_printf.c ./srcs/ft_putchar_printf.c ./srcs/ft_putstr_printf.c \
		./srcs/ft_itoa.c ./srcs/ft_itoa_unsigned.c ./srcs/ft_calloc.c ./srcs/ft_putnbr_printf.c \
		./srcs/ft_putnbr_unsig_printf.c ./srcs/ft_bzero.c ./srcs/ft_memset.c ./srcs/ft_putptr_printf.c \
		./srcs/ft_putchar.c ./srcs/ft_puthex_printf.c

OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -MMD
DEPS = $(addsuffix .d, $(basename $(SRCS)))

.c.o: ${CC} ${CFLAGS} -I ft_printf.h -c $< -o ${<:.c=.o}

all:			$(NAME)

-include $(DEPS)
$(NAME):		$(OBJS) ft_printf.h
				ar rcs $(NAME) $(OBJS)

bonus: 			$(OBJS) $(OBJS_B)
				ar rcs $(NAME) $(OBJS)		

clean:
				${RM} ${OBJS} ${DEPS} ${DEPS2}
				$(RM) $(OBJS) 

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re