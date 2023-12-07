# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 02:32:13 by elmaksim          #+#    #+#              #
#    Updated: 2023/12/07 11:52:42 by elmaksim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SOURCES = atoi.c ft_do_op.c ft_putnbr.c op_func.c
OBJECTS = $(patsubst %.c,%.o, $(SOURCES))

CC = cc
CFLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:  
	@rm -rf $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
