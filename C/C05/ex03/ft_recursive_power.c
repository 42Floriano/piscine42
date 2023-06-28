/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 11:24:28 by falberti          #+#    #+#             */
/*   Updated: 2023/06/16 12:06:44 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	nb_two;

	i = 2;
	nb_two = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (ft_recursive_power(nb, power -1) * nb);
}
/*
int	main(void)
{
	int nb; 
	int	power;

	nb = 2;
	power = 3;
	printf("%d", ft_recursive_power(nb, power));
	return (0);
}
*/
