NAME = world

C_GRAY    = \e[93;5;226m
C_GREEN   = \e[92;5;118m
C_RESET = \033[0m

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 

RM = rm -rf

HEADER = AAnimal.hpp Cat.hpp Dog.hpp Brain.hpp

SRCS = main.cpp AAnimal.cpp Cat.cpp Dog.cpp Brain.cpp

OBJS = ${SRCS:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $^ -o $@
	@echo "$(C_GRAY)    - Compilation finished!....$(C_RESET)"

%.o:%.cpp $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)
	@echo "$(C_GREEN)    - Removed Object File finished!....$(C_RESET)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(C_GREEN)    - Removed finished!....$(C_RESET)"

re: fclean all

.PHONY: all fclean clean re
