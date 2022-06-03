# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/03 15:57:36 by kmilchev          #+#    #+#              #
#    Updated: 2022/06/03 19:05:33 by kmilchev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CGLAFS = -Werror -Wextra -Wall -std=c++98

SRCs = main.cpp ClapTrap.cpp

OBJs = $(SRCs:.cpp=.o)

HEADERS = ClapTrap.hpp

NAME = clappy_trappy

RM = rm -rf

all: $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@
	
$(NAME): $(OBJs)
	$(CC) $(OBJs) -o $(NAME)
	
clean: clean
	$(RM) $(OBJs)

fclean:
	$(RM) $(NAME)

re: fclean all
