# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/28 17:23:05 by kmilchev          #+#    #+#              #
#    Updated: 2022/05/28 19:45:46 by kmilchev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCs = main.cpp

OBJs = $(SRCs:.cpp=.o)

NAME = zombie

RM = rm -rf

all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJs)
	$(CC) $(OBJs) -o $(NAME)
	
clean:
	$(RM) $(OBJs)
	
fclean: clean
	$(RM) $(NAME)

re: fclean all