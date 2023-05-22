NAME = megaphone

C_BLUE    = \033[0;34m
C_GREEN   = \033[0;32m
C_RESET = \033[0m

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

all: $(NAME)

$(NAME): megaphone.o
	@$(CC) $(CFLAGS) $< -o $(NAME)
	@printf "$(C_BLUE)    - Compilation finished!....$(C_RESET)\n"

megaphone.o: megaphone.cpp
	@$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	@$(RM) megaphone.o
	@printf "$(C_GREEN)    - Removed Object File finished!....$(C_RESET)\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(C_GREEN)    - Removed finished!....$(C_RESET)\n"

re: all fclean

.PHONY: all clean fclean re