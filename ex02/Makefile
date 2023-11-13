#= Variables =#

NAME := MutantStack

SRCS := main.cpp MutantStack.cpp
SRCSDIR := srcs

OBJDIR := obj

OBJ := $(addprefix $(OBJDIR)/,$(SRCS:.cpp=.o))

CPP_FLAGS = -Wall -Werror -Wextra -std=c++11

INC_DIR = includes
INC_FLAGS := -I$(INC_DIR)

#= COLORS =#

GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

#= Targets =#

all: $(NAME)

$(NAME): $(OBJDIR) $(OBJ) $(INCLUDES)
	@echo "$(GREEN)Building MutantStack ...$(RESET)"
	@c++ $(OBJ) -o $(NAME)

$(OBJDIR)/%.o: $(SRCSDIR)/%.cpp
	@c++ $(CPP_FLAGS) $(INC_FLAGS) -c $< -o $@


$(OBJDIR):
	@mkdir -p $(OBJDIR)

clean:
	@rm -rf $(OBJDIR)
	@echo "$(RED)Cleaning ...$(RESET)"

fclean: clean
	@rm -rf $(NAME) $(OBJDIR)

re: fclean all