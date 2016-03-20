# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vklepper <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/25 17:53:51 by vklepper          #+#    #+#              #
#*   Updated: 2016/03/20 16:13:21 by vklepper         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
SRC_NAME = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		   ft_itoa.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c \
		   ft_memset.c ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c \
		   ft_putstr.c ft_putstr_fd.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c \
		   ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c \
		   ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strndup.c ft_strnequ.c ft_strnew.c \
		   ft_strnstr.c ft_strrchr.c ft_strrev.c ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c \
		   ft_tolower.c ft_toupper.c get_next_line.c ft_isnumber.c
SRC_PATH = ./srcs/
OBJ_PATH = ./obj/
OBJ_NAME = $(SRC_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))

all : $(NAME)

$(NAME) : $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "Compilation Libft [\033[1;32mOK\033[0m]"

$(OBJ_PATH)%.o : $(SRC_PATH)%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) $(CFLAGS) $(INC) -o $@ -c $<
clean:
	@/bin/rm -rf $(OBJ_PATH)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
