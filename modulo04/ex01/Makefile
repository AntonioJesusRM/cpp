# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/24 10:34:38 by aruiz-mo          #+#    #+#              #
#    Updated: 2023/04/24 16:55:11 by aruiz-mo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BrainAnimal

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

COLOR = \033[1;32m

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp Brain.cpp

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJ)
	@echo "$(COLOR)BrainAnimal compiled successfully"

clean:
	@$(RM) $(OBJ)
	@echo "$(COLOR).o clean successfully"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(COLOR)BrainAnimal clean successfully"

re: fclean all

.PHONY: all clean fclean re