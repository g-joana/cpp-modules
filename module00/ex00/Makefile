NAME = megaphone

SRC = megaphone.cpp
COMPILER = g++
FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):$(SRC)
	$(COMPILER) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all
