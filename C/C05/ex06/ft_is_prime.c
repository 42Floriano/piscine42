/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:23:48 by falberti          #+#    #+#             */
/*   Updated: 2023/06/19 16:41:32 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	count;

	count = 0;
	if (nb == 1 || nb == 0 || nb < 0)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			count ++;
		i++;
	}
	if (count != 0)
		return (0);
	return (1);
}
/*
int	main(void)
{
	printf("%d", ft_is_prime(-11));
	return (0);
}*/
