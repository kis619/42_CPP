# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/05 14:00:12 by kmilchev          #+#    #+#              #
#    Updated: 2022/06/06 17:57:38 by kmilchev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

########################################### MAIN PROGRAM ######
NAME = animal_farm

SRCs = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

OBJs := $(SRCs:.cpp=.o)

HEADERS = Animal.hpp Cat.hpp Dog.hpp Brain.hpp


########################################## "WRONG" PROGRAM #####
NAME_WRONG = animal_asylym

SRCs_WRONG = wrongMain.cpp WrongAnimal.cpp WrongCat.cpp

OBJs_WRONG = $(SRCs_WRONG:.cpp=.o)

HEADERS_WRONG = WrongAnimal.hpp WrongCat.cpp

all: $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJs) $(HEADERS)
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