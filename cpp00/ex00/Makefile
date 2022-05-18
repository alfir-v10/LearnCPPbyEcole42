NAME		=	megaphone

SRC			=	megaphone.cpp

FLAGS     	=	-Wall -Wextra -Werror -std=c++98

CC			=	clang++

.PHONY		:	all clean fclean re

all			:	${NAME}

${NAME}		:	${SRC}
				$(CC) $(FLAGS) -o $(NAME) $(SRC)

clean		:
				rm -rf ${OBJS}

fclean		:	clean
				rm -rf ${NAME}

re			:	fclean all