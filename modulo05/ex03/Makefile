# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/24 10:34:38 by aruiz-mo          #+#    #+#              #
#    Updated: 2023/09/19 11:24:47 by aruiz-mo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Form

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

COLOR = \033[1;32m

SRC = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp \
	RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJ)
	@echo "$(COLOR)Form compiled successfully"

clean:
	@$(RM) $(OBJ)
	@echo "$(COLOR).o clean successfully"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(COLOR)Form clean successfully"

re: fclean all

.PHONY: all clean fclean re