NAME		=	ex00

SRC		=	main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

HPP			=	Zombie.h

CC			=	clang++

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