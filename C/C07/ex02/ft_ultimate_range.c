/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 11:21:15 by falberti          #+#    #+#             */
/*   Updated: 2023/06/22 17:43:01 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc (sizeof(int) * (max - min));
	if (!(*range))
		return (-1);
	while (min < max)
	{
		(*range)[i] = min++;
		i++;
	}	
	return (i);
}
/*
int	main(void)
{
	int	*range;
	int	i;
	int	total;

	total = 0;
	i = 0;
	total = ft_ultimate_range(&range, 8500, 8503);
	while (i < total)
	{
		printf("Test: %d", range[i]);
		i++;
	}
	return (0);
}*/
