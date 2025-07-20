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

MSG_COMPILE = @echo "$(GREEN)🔧 Compilando $(NAME)...$(RESET)"

NAME = phonebook
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Contact.cpp PhoneBook.cpp main.cpp
INCLUDES = Contact.hpp PhoneBook.hpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(MSG_COMPILE)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(INCLUDES)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@echo "$(YELLOW)🧼 Limpieza de objetos realizada.$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)🗑️  Eliminado binario final.$(RESET)"

re: fclean all

.PHONY: all clean fclean re