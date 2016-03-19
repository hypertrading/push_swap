# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vklepper <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/04 20:52:39 by vklepper          #+#    #+#              #
#*   Updated: 2016/03/19 13:19:36 by vklepper         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC =	srcs/main.c srcs/f_swap.c srcs/f_push.c srcs/f_rotate.c srcs/f_rev_rotate.c srcs/parsing.c srcs/messages.c srcs/solve.c srcs/f_for_solve.c
OBJ= $(SRC:.c=.o)
FLAGS= -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@make -C libft/
	@gcc $(FLAGS) -o $(NAME) -Ilibft libft/libft.a $(SRC)
	@echo "Compilation $(NAME) ok"

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
