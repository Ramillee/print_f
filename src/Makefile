NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_parser.c

OBJ = $(SRC:.c=.o)


%.o:%.c
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ) ft_printf.h
	make -C libft/
	ar rcs $(NAME) $(OBJ) libft/*.o

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

norme:
	@norminette $(SRC) ../libft/

.PHONY: all clean fclean re norme