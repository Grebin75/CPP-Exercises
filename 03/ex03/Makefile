SRCS = main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \
		DiamondTrap.cpp \

FLAGS = -Werror -Wall -Wextra -std=c++98 -Wshadow -g -fsanitize=address
CC = c++
RM = rm -rf
NAME = DiamondTrap

all: $(NAME)

$(NAME): $(SRCS)
		$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	$(RM) *.dSYM

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean all fclean all
