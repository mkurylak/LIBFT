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

OBJ = $(SRC:.c=.o)

HEADER = libft.h

CFLAGS = -Werror -Wextra -Wall

NAME = libft.a

all:	$(NAME)

$(NAME): $(OBJ)
	ar -crs $@ $^

%.o: %.c $(HEADER)
	cc $(CFLAGS) $< -c -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
