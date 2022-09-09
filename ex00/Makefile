NAME = megaphone

FLAGS = -Wall -Wextra -Werror -std=c++98

CC = c++

SRC = Megaphone.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
