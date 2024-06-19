##########################################################
##	ARGUMENTS
NAME	= PhoneBook
CPP		= c++
RM		= rm -f
FLAGS	= -Wall -Wextra -Werror -std=c++98

##########################################################
##	SRC && OBJ

SRC		= myphonebook.cpp contact.cpp main.cpp
OBJ		= $(SRC:.cpp=.o)

##########################################################
##	RULES

$(NAME): $(OBJ)
	@$(CPP) $(FLAGS) -o $@ $^
	@echo Mandatory compiled

all: $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) -f $(NAME)
	@echo "fclean done"

re : fclean all

.PHONY: all clean bonus fclean re