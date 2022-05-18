NAME		=	ex00

SRC		    =	main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

HPP			=	Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

CC			=	c++

FLAGS		=	-Wall -Wextra -Werror -std=c++98

.PHONY		:	all clean fclean re

all			:	$(NAME)

$(NAME)		:	$(SRC) $(HPP)
				$(CC) $(FLAGS) -o $(NAME) $(SRC)

clean		:
				rm -rf $(NAME)

fclean		:	clean
				rm -rf $(NAME)

re			:	fclean all