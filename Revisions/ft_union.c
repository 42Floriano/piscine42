/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_union.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:02:45 by falberti          #+#    #+#             */
/*   Updated: 2023/06/29 15:14:31 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_union(char *str1, char *str2)
{
	int tab[128] = {0};
	int i = 0;

	while(str1[i])
	{
		if(tab[str1[i]] == 0)
		{
			write(1, &str1[i], 1);
			tab[str1[i]] = 1;
		}
		i++;
	}
	i = 0;
	while(str2[i])
	{
		if(tab[str2[i]] == 0)
		{
			write(1, &str2[i], 1);
			tab[str2[i]] = 1;
		}
		i++;
	}
	write(1, "\n", 1);
}
int	main(int ac, char **av)
{
	ft_union(av[1], av[2]);
	return (0);
}
