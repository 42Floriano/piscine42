/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:47:34 by falberti          #+#    #+#             */
/*   Updated: 2023/06/07 18:51:27 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char a, char b, char c)
{
	int	bf;

	bf = a + 48;
	write (1, &bf, 1);
	bf = b + 48;
	write (1, &bf, 1);
	bf = c + 48;
	write (1, &bf, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_write (a, b, c);
				if (a != 7 || b != 8 || c != 9)
				{
					write (1, ", ", 2);
				}
				++c;
			}
			++b;
		}
		++a;
	}
	write(1, "\n", 1);
}
