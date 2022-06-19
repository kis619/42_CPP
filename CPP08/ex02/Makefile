# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/17 09:10:07 by kmilchev          #+#    #+#              #
#    Updated: 2022/06/19 13:37:43 by kmilchev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Werror -Wextra -Wall -Wshadow  -Wno-shadow -std=c++98

SRCs = main.cpp
		
OBJs := $(SRCs:.cpp=.o)

HEADERS = MutantStack.hpp 

NAME = mute_stack

RM = rm -rf

all: $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@
	
$(NAME): $(OBJs)
	$(CC) $(OBJs) $(CFLAGS) -o $(NAME)
	
clean:
	$(RM) $(OBJs) 

fclean: clean
	$(RM) $(NAME)

re: fclean all
