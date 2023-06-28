/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroulet <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 09:57:10 by jroulet           #+#    #+#             */
/*   Updated: 2023/06/26 13:50:07 by jroulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

/*int check_len_col(char *tab)
{
	int i;

	i = 0;
	while (tab[i])
		i++;
	return (i + 1);
}*/

int	check_len_pline(char *tab)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while(tab[i])
	{
		if (tab[i] == '\n')
		{
			count ++;
		}
	}
	return (count);
}

int check_len_line(char *tab)
{
	int i;
	int lines;

	i = 0;
	lines = 0;
	while (tab[i])
	{
		if (tab[i] == '\n')
			lines ++;
		i++;
	}
	return (lines +1);
}

char	**ft_tab_maker(char	*tab)
{
	char	**twod_tab;
	int	i;  // incrementation for the tab
	int	j;	// incremetation for 2d_tab[j][k] (line)
	int	k;	// incrementation for 2d_tab[j][k] (column)

	i = 0;
	j = 0;
	k = 0;

 	int line = check_len_line(tab);
	int	column = check_len_pline(tab);

	printf("line = %d\n", line);
	printf("col = %d\n", column);

/*
	twod_tab = malloc((sizeof(*twod_tab)*check_len_line));

	while (i <= check_len_line(tab))
	{
		ft_copy_and_malloc()
		twod_tab[i] = malloc(sizeof(char) *check_len_pline(tab));
		i++;
	}

	while(tab[i])
	{

		twod_tab[j][k] = tab[i];
		if(tab[i + 1]=='\n')
		{
			j++;
			k = 0;
		}
		write(1, &twod_tab[j][k], 1);
		k++;
		i++;
	}
	
*/
	return (twod_tab);

}

/*
void ft_nl_remover(char	*tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		if (tab[i]=='\n')
		{
			tab[i] = 'X';
		}
		i++;
	}
	printf("tab = %s\n", tab);
}
*/
char	*ft_file_open(char	*file_name)
{
	char	*tab;
	int		file;
	char	buff[2];
	int		length;

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
//	ft_nl_remover(tab);
	ft_tab_maker(tab);
	return (tab);
}

int	main(int argc, char	**argv)
{
	char *tab;

	if(argc != 2)
	{
		write(1, "Please enter a filename", 14);
	}
	else
	{
		tab = ft_file_open(argv[1]);
	}
	//printf("tab = %s\n", tab);

}
