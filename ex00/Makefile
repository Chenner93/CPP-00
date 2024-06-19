##########################################################
##	ARGUMENTS
NAME	= megaphone
CC		= c++
RM		= rm -f
FLAGS	= -Wall -Wextra -Werror -std=c++98

##########################################################
##	SRC && OBJ

SRC		= megaphone.cpp
OBJ		= $(SRC:.cpp=.o)

##########################################################
##	RULES

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) -o $@ $^
	@echo Mandatory compiled

all: $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) -f $(NAME)
	@echo "fclean done"

re : fclean all

.PHONY: all clean bonus fclean re
