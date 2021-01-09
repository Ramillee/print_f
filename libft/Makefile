# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atweek <atweek@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/29 22:32:18 by atweek            #+#    #+#              #
#    Updated: 2021/01/09 17:12:30 by atweek           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I. -c

SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
ft_memchr.c ft_memset.c ft_memcmp.c ft_memccpy.c ft_strlen.c \
ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_memmove.c \
ft_strnstr.c ft_atoi.c ft_strncmp.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c ft_toupper.c \
ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
ft_strtrim.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
ft_putnbr_fd.c ft_strmapi.c ft_split.c ft_isspace_bonus.c

SRCBONUS = ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
ft_lstiter.c ft_lstnew.c ft_lstadd_front.c ft_lstclear.c ft_lstmap.c 

OBJS = ${SRC:.c=.o}

OBJSBONUS = ${SRCBONUS:.c=.o}

HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CC) $(CFLAGS) $(SRC)
	ar rc $(NAME) $(OBJS) $(HEADER)
	ranlib $(NAME)

bonus: all $(OBJSBONUS)
	$(CC) $(CFLAGS) $(SRCBONUS)
	ar rc $(NAME) $(OBJSBONUS) $(HEADER)
	ranlib $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
	
.PHONY: clean fclean all bonus re
