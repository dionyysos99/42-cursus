NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra -I. -c -g

FILES = ft_printf.c \
		ft_putnbr.c\
		ft_putchar.c \
		ft_putstr.c \
		ft_puthex.c \
		ft_putpointer.c \
		ft_putunsg.c 

OBJ = $(FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(FILES)
	cc $(CFLAGS) $(FILES)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re