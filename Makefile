# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vklepper <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/04 20:52:39 by vklepper          #+#    #+#              #
#    Updated: 2016/02/04 20:52:44 by vklepper         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = srcs/main.c
OBJ = srcs/main.o 

all: $(NAME)

$(NAME):
	@make -C libft/
	@gcc -Wall -Wextra -Werror -o $(NAME) -Ilibft libft/libft.a $(SRC)
	echo "Compilation $(NAME) ok"

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
