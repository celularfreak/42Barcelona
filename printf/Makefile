# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnunez-m <dnunez-m@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/09 13:01:31 by dnunez-m          #+#    #+#              #
#    Updated: 2022/02/11 10:06:50 by dnunez-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = ./srcs/ ft_printf.c

OBJS = $(SRCS:.c=.o)
NAME = libftprint.a


CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

bonus: 			$(OBJS) $(OBJS_B)
				ar rcs $(NAME) $(OBJS)		

clean:
				$(RM) $(OBJS) 

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re