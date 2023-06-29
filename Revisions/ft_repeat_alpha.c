/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_repeat_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:37:07 by falberti          #+#    #+#             */
/*   Updated: 2023/06/29 15:55:29 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int main(int ac, char **av)
{
	int i = 0;
	int index = 0;

	while (av[1][i])
	{
		if (av[1][i] >= 65 && av[1][i] <= 90)
		{
			index = (av[1][i] - 64);
		}
		if (av[1][i] >= 97 && av[1][i] <= 122)
		{
			index = (av[1][i] - 96);
		}
		while(index)
		{
			write(1, &av[1][i], 1);
			index--;
		}
		i++;
	}
	return (0);
}
