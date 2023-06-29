/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 13:47:48 by falberti          #+#    #+#             */
/*   Updated: 2023/06/29 13:59:10 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_reverse(char *str)
{
	int	size;
	int	i;

	size = 0;
	i = 0;
	while (str[size])
		size++;
	while (size >= 0)
	{
		ft_putchar(str[size--]);
	}
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	ft_print_reverse(av[1]);
	return (0);
}
