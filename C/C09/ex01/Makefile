NAME = libft.a

SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

OBJ =    ./srcs/ft_putchar.o ./srcs/ft_putstr.o ./srcs/ft_strcmp.o ./srcs/ft_strlen.o ./srcs/ft_swap.o

FLAGS = -Wall -Wextra -Werror 

HEADS = ./includes/

all: libft.a

libft.a: $(OBJ)
	ar rcs libft.a $(OBJ)
 
%.o: %.c
	gcc $(FLAGS) -I $(HEADS) -c -o $@ $^

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(OBJ)

re: fclean all