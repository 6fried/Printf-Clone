##
## Makefile 
## Printf clôné
##


CC =		gcc

NAME =		build/Demo

CFLAGS =	-Wall -Werror -Iinclude

SRC = 		$(shell find src/ -name '*.c')\
		$(shell find lib/ -name '*.c')\
		$(shell find core/ -name '*.c')\
		main.c

OBJ = 		$(SRC:.c=.o)

all: 	 $(NAME) clean fclean

$(NAME): $(OBJ)
		rm -f $(NAME)
		$(CC) -o $@ $^ $(CFLAGS)

clean:
		rm -f $(OBJ)
		rm -f *~ src/*~ include/*~ core/*~ lib/*~

fclean: clean		
		rm -f a.out src/a.out core/a.out lib/a.out

re: fclean all

.PHONY: fclean clean re
