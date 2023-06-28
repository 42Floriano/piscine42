/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 13:50:37 by jroulet           #+#    #+#             */
/*   Updated: 2023/06/27 14:47:15 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdbool.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

void ft_putchar(int c, int column, int x)
{
	if(c == -1)
	{
		write (1, 49, 1);
	} else 
	{
		write (1, c, 1);
	}
	c += 48;
	if(x % (column) == 0 && x != 0)
	write (1, "\n", 1);
}

// x = ---------->
// y   00 01 02 03
// =   10 11 12 13
// |   20 21 22 23
// |   30 31 32 33
// |   40 41 42 43
// |   50 51 52 53
// V
void	ft_array_creator(char *tab, int column, int line, int	hs)
{
	int x;
	int y;
	int	i;
	int		**array;

	array = malloc(line * column * sizeof(int));

	printf("colum = %d\n", column);
	printf("line = %d\n", line);

	i = hs + 1;
	y = 1;
	while (y <= line)
	{
		array[y] = malloc(sizeof(int));
		x = 0;
		while(x <= column)
		{
			if(tab[i] == '.')
			{
				array[y][x] = 0;
			} else if(tab[i] == 'o') 
			{
				array[y][x] = -1;	
			}		
			ft_putchar(array[y][x], column, x);
			i++;
			x++;
		}	
		y++;
	}
	//ft_print_array(array, line, column);
	
}

int	ft_header_skipper(char *tab)
{
	int	i;

	i = 0;
	while (tab[i] != '\n')
	{
		i++;
	}
	return (i);
}

int	ft_column_counter(char *tab, int hs)
{
	int	column;
	int	i;

	column = 0;
	i = hs + 1;
	hs ++;
	while (tab[i] != '\n')
	{
		column ++;
		i++;
	}
	return (column);
}

int	ft_line_counter(char *tab, int hs)
{
	int	i;
	int	line;

	i = 0;
	line = 0;
	while (tab[i])
	{
		if (tab[i] == '\n')
			line ++;
		i++;
	}
	return (line -1);
}

char	*ft_file_open(char	*file_name)
{
	char	*tab;
	int		file;
	char	buff[2048];
    int		length;
	int		header;
	
	header = 0;
	length = 0;
	file = open(file_name, O_RDONLY);
	if (file == -1)
	{
		write(1, "can't open file\n", 17);
	}
	else
	{
		while (read(file, buff, 1))
			length ++;
		tab = malloc(sizeof(char) * length + 1);
		if (!tab)
			write(1, "Error\n", 6);
		close(file);
		file = open(file_name, O_RDONLY);
		read(file, tab, length);
	}
	close(file);
	printf("header skipper %d\n", ft_header_skipper(tab));
	ft_array_creator(tab, ft_column_counter(tab, ft_header_skipper(tab)), ft_line_counter(tab, ft_header_skipper(tab)), ft_header_skipper(tab));
	return (0);
}

int	main(int argc, char **argv)
{
	char	*tab;

	if (argc != 2)
	{
		write(1, "Please enter a filename", 14);
		tab = ft_file_open("example_file10");
	}
	else
	{
		tab = ft_file_open(argv[1]);
	}
}
