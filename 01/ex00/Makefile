SRCS = srcs/newZombie.cpp \
		srcs/Zombie.cpp \
		srcs/randomChump.cpp \
		main.cpp \

FLAGS = -Werror -Wall -Wextra -std=c++98  -g -fsanitize=address
CC = c++
RM = rm -rf
NAME = zombie

all: $(NAME)

$(NAME): $(SRCS)
		$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) *.dSYM

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean all fclean all
