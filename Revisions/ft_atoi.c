/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 17:57:43 by falberti          #+#    #+#             */
/*   Updated: 2023/06/28 18:24:47 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int nb;
	int i;
	int minus;

	i = 0;
	nb = 0;
	minus = 0;
	while(str[i] && ((str[i] >= 9 && str[i] <= 13) || 
				str[i] == 32 || str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			minus ++;
		i++;
	}
	while(str[i] && (str[i] >= 48 && str[i] <= 57))
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
		if (!(minus % 2 == 0))
			return (nb * - 1);
	return (nb);
}
int main (void)
{
	
	printf("test: %d", ft_atoi("13fasd122"));
	
	return (0);
}
