# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/03 15:57:36 by kmilchev          #+#    #+#              #
#    Updated: 2022/06/09 11:41:38 by kmilchev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

# CFLAGS = -Werror -Wextra -Wall -Wshadow  -Wno-shadow -std=c++98

SRCs =	main.cpp Bureaucrat.cpp AForm.cpp \
		SchrubberyCreationForm.cpp \
		PresidentialPardonForm.cpp \
		RobotomyRequestForm.cpp
		
OBJs := $(SRCs:.cpp=.o)

HEADERS =	Bureaucrat.hpp AForm.hpp SchrubberyCreationForm.hpp \
			PresidentialPardonForm.hpp \
			RobotomyRequestForm.hpp 

NAME = bureaucrat

RM = rm -rf

all: $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@
	
$(NAME): $(OBJs)
	$(CC) $(OBJs) $(CFLAGS) -o $(NAME)
	
clean:
	$(RM) $(OBJs) *_schrubbery

fclean: clean
	$(RM) $(NAME)

re: fclean all
