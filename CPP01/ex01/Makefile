# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/28 17:23:05 by kmilchev          #+#    #+#              #
#    Updated: 2022/05/29 17:40:19 by kmilchev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCs = Zombie.cpp main.cpp zombieHorde.cpp

OBJs = $(SRCs:.cpp=.o)

NAME = zombie

HEADERS = Zombie.hpp

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