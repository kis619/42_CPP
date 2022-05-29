# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/28 17:23:05 by kmilchev          #+#    #+#              #
#    Updated: 2022/05/29 14:22:55 by kmilchev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCs = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJs = $(SRCs:.cpp=.o)

HEADERS = HumanA.hpp HumanB.hpp Weapon.hpp

NAME = weapon

RM = rm -rf

all: $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJs) 
	$(CC) $(OBJs) -o $(NAME)
	
clean:
	$(RM) $(OBJs)
	
fclean: clean
	$(RM) $(NAME)

re: fclean all
