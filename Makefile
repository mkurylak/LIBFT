# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: makuryla <makuryla@student.42angouleme.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 16:48:41 by makuryla          #+#    #+#              #
#    Updated: 2024/10/19 17:31:16 by makuryla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_atoi.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strncmp.c \
	ft_strdup.c \
	ft_strchr.c \
    ft_strrchr.c \
    ft_calloc.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strnstr.c \
	ft_strlcat.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_substr.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_striteri.c \
	ft_strmapi.c \
	ft_itoa.c \
	ft_strjoin.c \
	ft_strtrim.c \

OBJ = $(SRC:.c=.o)

HEADER = libft.h

CFLAGS = -Werror -Wextra -Wall

NAME = libft.a

all:	$(NAME)

$(NAME): $(OBJ)
	ar -crs $@ $^

%.o: %.c $(HEADER)
	cc $(CFLAGS) $< -c -o $@

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
