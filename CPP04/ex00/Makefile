# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/05 14:00:12 by kmilchev          #+#    #+#              #
#    Updated: 2022/06/05 14:29:27 by kmilchev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

########################################### MAIN PROGRAM ######
NAME = animal_farm

SRCs = main.cpp Animal.cpp Cat.cpp Dog.cpp 

OBJs := $(SRCs:.cpp=.o)

HEADERS = Animal.hpp Cat.hpp Dog.hpp


########################################## "WRONG" PROGRAM #####
NAME_WRONG = anima_asylym

SRCs_WRONG = wrongMain.cpp WrongAnimal.cpp WrongCat.cpp

OBJs_WRONG = $(SRCs_WRONG:.cpp=.o)

HEADERS_WRONG = WrongAnimal.hpp WrongCat.cpp

all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJs)
	$(CC) $(OBJs) -o $(NAME)

wrong: $(NAME_WRONG)

$(NAME_WRONG): $(OBJs_WRONG)
	$(CC) $(OBJs_WRONG) -o $(NAME_WRONG)

clean:
	$(RM) $(OBJs)
	$(RM) $(OBJs_WRONG)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(NAME_WRONG)

re: fclean all