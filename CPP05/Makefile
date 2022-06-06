# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmilchev <kmilchev@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/03 15:57:36 by kmilchev          #+#    #+#              #
#    Updated: 2022/06/07 00:52:03 by kmilchev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CGLAFS = -Werror -Wextra -Wall -Wshadow  -Wno-shadow -std=c++98

SRCs = main.cpp Bureaucrat.cpp

OBJs = $(SRCs:.cpp=.o)

HEADERS = Bureaucrat.hpp

NAME = bureaucrat

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
