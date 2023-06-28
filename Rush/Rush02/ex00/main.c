/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:55:07 by falberti          #+#    #+#             */
/*   Updated: 2023/06/25 23:33:33 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	main(int ac, char **av)
{
	long	nb;
	char	*dico;

	dico = ft_parse_dict("numbers.dict");
	if (!(av[1]))
	{
		write(2, "Error, enter a positive number please", 37);
		return (1);
	}
	nb = ft_atoi_and_check(av[1]);
	ft_putstr(av[1]);
	if (nb < 0)
	{
		write(2, "Error, enter a positive number please", 37);
		return (1);
	}
	if (ac == 2)
	{
	}
	if (ac == 3)
	{
	}
	free(dico);
}
