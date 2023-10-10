# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/04 16:02:53 by aruiz-mo          #+#    #+#              #
#    Updated: 2023/10/09 13:29:41 by aruiz-mo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Serializer

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

COLOR = \033[1;32m

SRC = main.cpp   Serializer.cpp

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJ)
	@echo "$(COLOR)Serializer compiled successfully"

clean:
	@$(RM) $(OBJ)
	@echo "$(COLOR).o clean successfully"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(COLOR)Serializer clean successfully"

re: fclean all

.PHONY: all clean fclean re