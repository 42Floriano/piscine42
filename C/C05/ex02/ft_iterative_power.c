/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 11:24:28 by falberti          #+#    #+#             */
/*   Updated: 2023/06/16 11:51:57 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	nb_two;

	i = 2;
	nb_two = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i <= power)
	{
		nb = nb * nb_two;
		i++;
	}
	return (nb);
}
/*
int main(void)
{
	int nb, power;

	nb = 0;
	power = 0;
	printf("%d", ft_iterative_power(nb, power));
	return (0);
}
*/
