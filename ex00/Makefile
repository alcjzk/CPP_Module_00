NAME	= megaphone

CC		= c++
OPT		= fast
WARN	= all extra error

override CFLAGS += $(OPT:%=-O%) $(WARN:%=-W%)

.PHONY: all

all: $(NAME)

$(NAME): *.cpp
	$(CC) $(CFLAGS) -o $@ $<

fclean:
	rm -rf $(NAME)

clean: fclean
re: fclean all
