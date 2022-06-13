# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/03 15:57:36 by kmilchev          #+#    #+#              #
#    Updated: 2022/06/13 03:08:07 by kmilchev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Werror -Wextra -Wall -Wshadow  -Wno-shadow -std=c++98

SRCs = main.cpp Base.cpp
#fromDouble.cpp fromFloat.cpp fromInt.cpp fromChar.cpp
		
OBJs := $(SRCs:.cpp=.o)

HEADERS = Base.hpp 

NAME = identity

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
