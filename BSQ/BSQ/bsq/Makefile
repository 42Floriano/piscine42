NAME = rush-02

SRC = main.c ft_put.c ft_putstr.c

OBJ =    *.o

ALLC = *.c

FLAGS = -Wall -Wextra -Werror 

all: final

debug:
	echo "Compiling all the files"
	gcc -g $(FLAGS) $(SRC) -o $(NAME)
final:
	echo "Compiling all the files"
	gcc $(FLAGS) $(SRC) -o $(NAME)
clean:
	echo "Cleaning all files but source"
	rm -f $(NAME)
fclean: clean
	rm -f $(OBJ)
