NAME		=	ex03

SRC		    =	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

HPP			=	ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

CC			=	c++

FLAGS		=	-Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

.PHONY		:	all clean fclean re

all			:	$(NAME)

$(NAME)		:	$(SRC) $(HPP)
				$(CC) $(FLAGS) -o $(NAME) $(SRC)

clean		:
				rm -rf $(NAME)

fclean		:	clean
				rm -rf $(NAME)

re			:	fclean all