/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 21:05:55 by falberti          #+#    #+#             */
/*   Updated: 2023/06/08 11:39:46 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char in)
{
	write(1, &in, 1);
}

int	ft_num_formater(int num, int unit)
{
	int	result;

	if (unit == 0)
	{
		result = num / 10 + 48;
	}
	else
	{
		result = num % 10 + 48;
	}	
	return (result);
}

void	ft_format_print(char a, char b)
{
	ft_write (ft_num_formater(a, 0));
	ft_write (ft_num_formater(a, 1));
	write(1, " ", 1);
	ft_write (ft_num_formater(b, 0));
	ft_write (ft_num_formater(b, 1));
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_format_print(a, b);
			if (a == 98 && b == 99)
			{
				write (1, "\n", 1);
			}
			else
			{
				write (1, ", ", 2);
			}		
			++b;
		}
		if (b == 100)
		{
			++a;
		}
	}
}
