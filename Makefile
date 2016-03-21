# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vklepper <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/03/21 12:10:58 by vklepper          #+#    #+#              #
#*   Updated: 2016/03/21 18:29:37 by vklepper         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC_NAME =	main.c f_swap.c f_push.c f_rotate.c f_rev_rotate.c parsing.c\
			messages.c solve.c f_for_solve.c
OBJ= $(SRC:.c=.o)
FLAGS= -Wall -Werror -Wextra
INC_PATH= ./includes/
SRC_PATH= ./srcs/
LIB_PATH= ./libft/

SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))

NORME := $(shell norminette $(SRC) $(LIB_PATH)srcs/*.[ch] $(INC_PATH)*.h | grep -B 1 Error)

all: $(NAME)

$(NAME):
	@make -C $(LIB_PATH)
	@gcc $(FLAGS) -o $(NAME) -Ilibft $(LIB_PATH)libft.a $(SRC)
	@echo "Compilation $(NAME) [\033[1;32mOK\033[0m]"

clean:
	@rm -f $(OBJ)
	@make clean -C $(LIB_PATH)

fclean: clean
	@rm -f $(NAME)
	@make fclean -C $(LIB_PATH)

re: fclean all


norme:
ifeq ($(NORME), )
	@echo "Norme srcs, includes et libft [\033[1;32mOK\033[0m]"
else
	@norminette $(SRC) $(LIB_PATH)srcs/*.[ch] $(INC_PATH)*.h | grep -B 1 Error
endif

dev: fclean all norme 
