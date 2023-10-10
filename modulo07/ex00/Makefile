# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/10 10:29:11 by aruiz-mo          #+#    #+#              #
#    Updated: 2023/10/10 10:39:34 by aruiz-mo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Operations

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

COLOR = \033[1;32m

SRC = main.cpp

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJ)
	@echo "$(COLOR)Operations compiled successfully"

clean:
	@$(RM) $(OBJ)
	@echo "$(COLOR).o clean successfully"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(COLOR)Operations clean successfully"

re: fclean all

.PHONY: all clean fclean re