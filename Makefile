NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I.

SRC = src/ft_printf.c src/ft_parser.c src/ft_processing.c src/ft_str_writer.c src/ft_num_writer.c \
	src/ft_num_writer_utils.c src/ft_x_writer.c src/ft_p_writer.c src/ft_p_writer_util.c

HEADER = src/ft_printf.h

OBJ = $(SRC:.c=.o)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	make -C libft/
	ar rcs $(NAME) $(OBJ) libft/*.o

clean:
	rm -f $(OBJ)
	make clean -C libft/

fclean: clean
	rm -f $(NAME)
	make fclean -C libft/

re: fclean all

norm:
	norminette $(SRC) $(HEADER) libft/

.PHONY: all clean fclean re norme