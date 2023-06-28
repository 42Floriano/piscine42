/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 10:13:48 by falberti          #+#    #+#             */
/*   Updated: 2023/06/22 18:05:43 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*array;
	int		i;
	int		back;

	i = 0;
	back = min;
	if (max <= min)
		return (0);
	array = (int *)malloc (sizeof(int) * (max - min));
	if (array == 0)
		return (array);
	while (i < (max - back))
	{
		array[i] = min++;
		i++;
	}
	return (array);
}
/*
int	main(void)
{
	int i;
	int *array;

	array = ft_range(-2, 19);
	if (!(array != 0))
		return (0);
	i = 0;
	while(array[i] != 777)
	{
		printf("Test: %d\n", array[i]);
		i++;
	}
	return (0);
}*/
