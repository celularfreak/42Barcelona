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
	   ft_strncmp.c ft_memcmp.c ft_memchr.c ft_strnstr.c ft_calloc.c ft_strdup.c \
	   ft_putnbr_fd.c ft_putendl_fd.c ft_substr.c ft_strjoin.c ft_strtrim.c \
	   ft_strmapi.c ft_striteri.c ft_itoa.c ft_split.c

FILES_B = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = $(FILES_C:.c=.o)

OBJS_B = $(FILES_B:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror -MMD

NAME = libft.a

RM 		= rm -f

DEPS = $(addsuffix .d, $(basename $(FILES_C)))
DEPS2 = $(addsuffix .d, $(basename $(FILES_B)))

.c.o: ${CC} ${CFLAGS} -I libft.h -c $< -o ${<:.c=.o}

all:			$(NAME)

-include $(DEPS)
$(NAME):		$(OBJS) libft.h
				ar -rcs $(NAME) $(OBJS)
				ranlib $(NAME)

-include $(DEPS2)
bonus:			.bonus

.bonus: 		$(OBJS) $(OBJS_B) libft.h 
				ar -rcs $(NAME) $(OBJS) $(OBJS_B)
				ranlib $(NAME)
				@touch $@

clean:
				${RM} ${OBJS} ${DEPS} ${DEPS2}
				$(RM) $(OBJS) $(OBJS_B) 

fclean:			clean
				$(RM) $(NAME) 
				$(RM) .bonus

re:				fclean $(NAME) 

.PHONY:			all bonus clean fclean re