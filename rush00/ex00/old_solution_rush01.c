/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                            :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:07:28 by falberti          #+#    #+#             */
/*   Updated: 2023/06/10 18:24:56 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	px;
	int	py;

	py = 0;
	while (py < y)
	{
		px = 0;
		while (px < x)
		{	
			if ((py == 0 || py == y - 1) && (px == 0 || px == x - 1))
			{
				ft_putchar('o');
				px++;
			}
			else if ((py == 0 || py == y - 1) && (px != 0 || px != x - 1))
			{
				ft_putchar('-');
				px++;
			}
			else if ((py != 0 || py != y - 1) && (px == 0 || px == x - 1))
			{
				ft_putchar('|');
				px++;
			}
			else
			{
				ft_putchar(' ');
				px++;
			}
			if (px == x)
			{
				write(1, "\n", 1);
				py++;
			}
		}	
	}
}
