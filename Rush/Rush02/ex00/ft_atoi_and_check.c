/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_and_check.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 19:09:17 by falberti          #+#    #+#             */
/*   Updated: 2023/06/25 21:58:35 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

long	ft_atoi_and_check(char *str)
{
	long	i;
	int		minus;
	long	res;

	i = 0;
	minus = 0;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32
		|| (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i++] - '0';
	}
	if (minus % 2 == 1 || !(res >= 0))
		return (-1);
	return (res);
}
