# Targets
NAME		= megaphone

# Flags setup
CC		= c++
OPT		= fast
WARN	= all extra error

# Compiler flags
override CFLAGS 	+= $(OPT:%=-O%) $(WARN:%=-W%)

all: $(NAME)

$(NAME): *.cpp
	$(CC) $(CFLAGS) -o $@ $<
