# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 17:43:18 by kmilchev          #+#    #+#              #
#    Updated: 2022/05/04 00:39:31 by kmilchev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ph_book

# CFLAGS =  -Wall -Wextra -Werror -std=c++98

SRCs = Contact.cpp PhoneBook.cpp main.cpp

OBJs := $(SRCs:.cpp=.o)

CC = c++

RM = rm -rf

all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@
	
$(NAME): $(OBJs)
	$(CC) $(OBJs) -o $(NAME)

clean:
	$(RM) $(OBJs)
	
fclean: clean
	$(RM) ph_book
	
re: fclean all