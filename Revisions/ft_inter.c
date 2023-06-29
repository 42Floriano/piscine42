/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 14:40:04 by falberti          #+#    #+#             */
/*   Updated: 2023/06/29 15:02:34 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_inter(char *cset, char *txt)
{
	int i = 0;
	int tab[128] = {0};

	while (txt[i])
	{
		if(tab[txt[i]] == 0)
		{
			tab[txt[i]] = 1;
		}
		i++;
	}





	i = 0;
	while (cset[i])
	{
		if(tab[cset[i]] == 1)
		{
			write(1, &cset[i], 1);
			tab[cset[i]] = 0;
		}
	i++;
	}
}

int main (int ac, char **av)
{
	ft_inter(av[1], av[2]);
	return (0);

}
