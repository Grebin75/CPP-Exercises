NAME = megaphone

SRCS = megaphone.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf *.dSYM

fclean: clean
	rm -rf $(NAME)

re: fclean all