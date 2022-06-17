
CC = c++

# CFLAGS = -Werror -Wextra -Wall -Wshadow  -Wno-shadow -std=c++98

SRCs = main.cpp 
		
OBJs := $(SRCs:.cpp=.o)

HEADERS = easyfind.hpp

NAME = iter

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
