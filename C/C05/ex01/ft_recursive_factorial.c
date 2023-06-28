/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 09:39:01 by falberti          #+#    #+#             */
/*   Updated: 2023/06/16 11:12:19 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	factorielle(int nb)
{
	if (nb == 0)
		return (1);
	else
		return (nb * factorielle(nb - 1));
}

int	ft_recursive_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	res = factorielle(nb);
	return (res);
}
/*
int	main(void)
{
	int	nb;

	nb = 4;
	ft_iterative_factorial(nb);
	return (0);
}*/
