# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etisha <etisha@student.21-school.>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/08 21:44:17 by etisha            #+#    #+#              #
#    Updated: 2021/10/08 21:44:23 by etisha           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I$(HEADER)

SRC_FILES = ft_atoi.c			ft_substr.c \
			ft_calloc.c 		ft_strjoin.c \
			ft_isalpha.c 		ft_strtrim.c \
			ft_isdigit.c 		ft_split.c \
			ft_memchr.c 		ft_itoa.c \
			ft_memcpy.c 		ft_strmapi.c \
			ft_memset.c 		ft_striteri.c \
			ft_strdup.c 		ft_putchar_fd.c \
			ft_strlcpy.c 		ft_putstr_fd.c \
			ft_strncmp.c 		ft_putendl_fd.c \
			ft_tolower.c 		ft_putnbr_fd.c \
			ft_bzero.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_memcmp.c \
			ft_memmove.c \
			ft_strchr.c \
			ft_strlcat.c \
			ft_strlen.c \
			ft_strrchr.c \
			ft_toupper.c \
			ft_strnstr.c

OBJ = $(patsubst %.c, %.o, $(SRC_FILES))

LIBC = ar rc

HEADER = libft.h

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(LIBC) $(NAME) $?

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
