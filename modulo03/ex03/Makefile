# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/23 11:37:23 by aruiz-mo          #+#    #+#              #
#    Updated: 2023/04/23 16:06:34 by aruiz-mo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = diamondTrap

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

COLOR = \033[1;32m

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJ)
	@echo "$(COLOR)diamondTrap compiled successfully"

clean:
	@$(RM) $(OBJ)
	@echo "$(COLOR).o clean successfully"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(COLOR)diamondTrap clean successfully"

re: fclean all

.PHONY: all clean fclean re
