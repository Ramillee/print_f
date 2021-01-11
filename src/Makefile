NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g

SRC = ft_printf.c ft_parser.c processing.c

HEADER = ft_printf.h

OBJ = $(SRC:.c=.o)

# %.o:%.c
# 	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ) ft_printf.h
	make -C ../libft/
	ar rcs $(NAME) $(OBJ) ../libft/*.o

clean:
	rm -f $(OBJ)
	make clean -C ../libft/

fclean: clean
	rm -f $(NAME)
	make fclean -C ../libft/

re: fclean all

norm:
	norminette $(SRC) $(HEADER) ../libft/

.PHONY: all clean fclean re norme