NAME=libftprintf.a

CC=gcc

CFLAGS=-Wall -Wextra -Werror

RM=rm -f

SRC_LIBFT = include_libft/ft_atoi.c\
			include_libft/ft_putchar.c\
			include_libft/ft_verif_isdigit.c\
			struct/ft_fill_struct.c\
			struct/ft_init_struct.c\
			verif/ft_verif_flags.c\
			ft_printf.c\
			test.c

OBJ_LIBFT = $(SRC_LIBFT:.c=.o)

$(NAME): $(OBJ_LIBFT)
				ar rc $(NAME) $(OBJ_LIBFT)
				ranlib $(NAME)

%.o: %.c
				$(CC) -I. -o $@ -c $? $(CFLAGS)

all: $(NAME)

clean:
				$(RM) $(OBJ_LIBFT)

fclean: clean
				$(RM) $(NAME)

re: fclean all

.PHONY: clean all fclean re $(NAME)
