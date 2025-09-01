
# Colors
BOLD	:= \033[1m
BLACK	:= \033[30;1m
RED		:= \033[31;1m
GREEN	:= \033[32;1m
YELLOW	:= \033[33;1m
BLUE	:= \033[34;1m
MAGENTA	:= \033[35;1m
CYAN	:= \033[36;1m
WHITE	:= \033[37;1m
RESET	:= \033[0m

MSG_COMPILE = @echo "$(GREEN)🔧 $(NAME) compliled...\n$(RESET)" ""


NAME = brain
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow -Iincludes
SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

SRCS	= $(addprefix src/, $(SRC))
OBJS	= $(addprefix obj/, $(SRC:.cpp=.o))

all: $(NAME)

create_obj:
	@mkdir -p obj 

$(NAME): $(OBJS)
	$(MSG_COMPILE)
	@$(CXX) $(CXXFLAGS) -o $@ $^
	
$(OBJS): obj/%.o: src/%.cpp | create_obj
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@echo "$(YELLOW)🧼 Limpieza de objetos realizada.$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@rm -rf obj
	@rm -rf *.dSYM
	@rm -f .DS_Store
	@echo "$(RED)🗑️  Eliminado binario final.$(RESET)"

re: fclean all

.PHONY: all clean fclean re