/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 09:16:15 by falberti          #+#    #+#             */
/*   Updated: 2023/06/19 12:32:41 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	ii;

	i = 1;
	while (i < ac)
	{
		ii = 0;
		while (av[i][ii])
		{
			write(1, &av[i][ii], 1);
			ii++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
