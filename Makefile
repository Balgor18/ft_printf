NAME=libftprintf.a

CC=gcc

CFLAGS=-Wall -Wextra -Werror

RM=rm -f

SRC_LIBFT = flags/flag_manager.c\
			include_libft/checker.c\
			include_libft/ft_atoi.c\
			include_libft/ft_itoa_base.c\
			include_libft/ft_itoa_unsigned.c\
			include_libft/ft_itoa.c\
			include_libft/ft_print_min_int.c\
			include_libft/ft_unsigned_itoa.c\
			include_libft/utilitils.c\
			manager/ft_manager_hexa.c\
			manager/ft_manager_int.c\
			manager/ft_manager_pointeur.c\
			manager/ft_manager_type.c\
			manager/ft_manager_uns_int.c\
			manager/ft_manager.c\
			struct/ft_init_struct.c\
			ft_printf.c\
			test.c

OBJ_LIBFT = $(SRC_LIBFT:.c=.o)

$(NAME): $(OBJ_LIBFT)
				$(CC) -I. $(OBJ_LIBFT) $(CFLAGS)
				ar rc $(NAME) $(OBJ_LIBFT)
				ranlib $(NAME)

%.o: %.c
				$(CC) -I. -o $@ -c $? $(CFLAGS)

all: $(NAME)

clean:
				$(RM) $(OBJ_LIBFT)
				$(RM) a.out

fclean: clean
				$(RM) $(NAME)

re: fclean all

code: $(OBJ_LIBFT)
				$(CC) -I. $(OBJ_LIBFT) $(CFLAGS)
				./a.out
				make clean

.PHONY: clean all fclean re $(NAME)
