SRCS = main.cpp \

FLAGS = -Wall -Werror -Wextra -std=c++98 -g -fsanitize=address
CC = c++
RM = rm -rf
NAME = easyfind

all: $(NAME)

$(NAME): $(SRCS)
		$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) *.dSYM

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean all fclean all