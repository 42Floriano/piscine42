NAME = rush-02

SRC = main.c ft_putchar.c ft_putstr.c ft_atoi_and_check.c ft_parse_dict.c ft_write_dict.c ft_strstr.c ft_read_dict.c ft_check_len.c

OBJ =    *.o

ALLC = *.c

FLAGS = -Wall -Wextra -Werror 

all: final

debug: main.c headers.h ft_putchar.c ft_putstr.c 
	echo "Compiling all the files"
	gcc -g $(FLAGS) $(SRC) -o $(NAME)
final: main.c headers.h ft_putchar.c ft_putstr.c 
	echo "Compiling all the files"
	gcc $(FLAGS) $(SRC) -o $(NAME)
clean:
	echo "Cleaning all files but source"
	rm -f $(NAME)
fclean: clean
	rm -f $(OBJ)
