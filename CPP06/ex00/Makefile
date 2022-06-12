# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/03 15:57:36 by kmilchev          #+#    #+#              #
#    Updated: 2022/06/13 01:11:18 by kmilchev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Werror -Wextra -Wall -Wshadow  -Wno-shadow -std=c++98

SRCs = main.cpp Convertor.cpp DetermineDataType.cpp Conversions.cpp
#fromDouble.cpp fromFloat.cpp fromInt.cpp fromChar.cpp
		
OBJs := $(SRCs:.cpp=.o)

HEADERS = conversions.hpp

NAME = conversion

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
