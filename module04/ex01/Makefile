NAME = animal

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
COMPILER = g++
FLAGS = -Wall -Wextra -Werror -std=c++98 -ggdb3

all: $(NAME)

$(NAME):$(SRC)
	$(COMPILER) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all
