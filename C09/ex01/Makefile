# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 02:32:13 by elmaksim          #+#    #+#              #
#    Updated: 2023/11/29 03:02:25 by elmaksim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c \
srcs/ft_strcmp.c
OBJECTS = $(SOURCES:.c=.o)
INCLUDES = includes

CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBC = ar rc
LIBR = ranlib


.PHONY: all clean fclean re

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I $(INCLUDES)

$(NAME): $(OBJECTS)
	$(LIBC) $(NAME) $(OBJECTS)
	$(LIBR) $(NAME)


all: $(NAME)

clean:  
	@rm -rf $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
