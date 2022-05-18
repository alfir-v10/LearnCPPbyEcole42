NAME		=	ex02

SRC		    =	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

HPP			=	ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

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