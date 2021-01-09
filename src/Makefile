NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g

SRC = ft_printf.c ft_parser.c

HEADER = ft_printf.h

OBJ = $(SRC:.c=.o)

%.o:%.c
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ) ft_printf.h
	make -C ../libft/
	ar rcs $(NAME) $(OBJ) ../libft/*.o

clean:
	rm -f $(OBJ)
	rm -f ../libft/*.o

fclean: clean
	rm -f $(NAME)
	rm -f ../libft/*.a

re: fclean all

norme:
	norminette $(SRC) $(HEADER) ../libft/

.PHONY: all clean fclean re norme