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

void	ft_print_line(int l, char a, char b, char c)
{
	int	i;

	i = 0;
	while (i < l)
	{
		if (i == 0)
			ft_putchar(a);
		else if (i == l - 1 && l > 1)
			ft_putchar(c);
		else
			ft_putchar(b);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	while (i < y)
	{
		if (i == 0 || y == 1)
			ft_print_line(x, '/', '*', '\\');
		else if (i == y - 1)
			ft_print_line(x, '\\', '*', '/');
		else
			ft_print_line(x, '*', ' ', '*');
		i++;
	}
}
