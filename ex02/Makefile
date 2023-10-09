NAME	= tests

OBJ_DIR	= ./obj
SRC_DIR = .

CC 		= c++
CFLAGS 	= -MP -MMD -I$(SRC_DIR) -std=c++98 -g -Wall -Werror -Wextra -Wpedantic
SHELL	= /bin/sh

SRCS	= tests.cpp Account.cpp

all: $(NAME)

run: all
	./$(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

$(NAME): $(SRCS:%.cpp=$(OBJ_DIR)/%.o)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR):
	mkdir -p $@

.PHONY: all

vpath %.cpp $(SRC_DIR)
-include $(SRCS:%.cpp=$(OBJ_DIR)/%.d)
