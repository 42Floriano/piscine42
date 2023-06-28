/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:21:33 by falberti          #+#    #+#             */
/*   Updated: 2023/06/15 16:27:24 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	neg;

	i = 0;
	num = 0;
	neg = 0;
	while (str[i] && !(str[i] >= 48 && str[i] <= 57))
	{
		if (str[i] != 45 && str[i] != 32 && str[i] != 43)
			return (0);
		if (str[i] == 45)
			neg++;
		i++;
	}
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	if (neg % 2 == 1)
		num *= -1;
	return (num);
}
/*
int	main(int argc, char *argv[])
{
	char str[] = "  He---lllo123.124";
	printf("%d", ft_atoi(argv[1]));
	return (0);
}*/
