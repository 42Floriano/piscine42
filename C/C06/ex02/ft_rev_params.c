/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 22:23:43 by falberti          #+#    #+#             */
/*   Updated: 2023/06/15 22:52:55 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int ac, char**av)
{
	int	i;
	int	ii;

	i = ac -1;
	while (i > 0)
	{
		ii = 0;
		while (av[i][ii])
		{
			write(1, &av[i][ii], 1);
			ii++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
