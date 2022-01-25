# **************************************************************************** #
#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnunez-m <dnunez-m@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/24 09:54:26 by dnunez-m          #+#    #+#              #
#    Updated: 2022/01/24 10:20:48 by dnunez-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES_C = ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	   ft_isprint.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
	   ft_tolower.c ft_toupper.c ft_putchar_fd.c ft_putstr_fd.c ft_memset.c \
	   ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strchr.c ft_strrchr.c \
	   ft_strncmp.c ft_memcmp.c ft_memchr.c

OBJS = $(FILES_C:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
