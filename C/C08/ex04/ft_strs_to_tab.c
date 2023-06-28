/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 13:28:02 by falberti          #+#    #+#             */
/*   Updated: 2023/06/22 13:00:34 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_return_str(char *str)
{	
	int		i;
	char	*copy;

	i = 0;
	copy = (char *) malloc(sizeof(char) * ft_strlen(str) +1);
	if (copy == 0)
		return (copy);
	while (str[i])
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*ss;

	ss = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (ss == 0)
		return (ss);
	i = 0;
	while (i < ac)
	{
		ss[i].size = ft_strlen(av[i]);
		ss[i].str = av[i];
		ss[i].copy = ft_return_str(av[i]);
		i++;
	}
	ss[i].str = 0;
	ss[i].size = 0;
	ss[i].copy = 0;
	return (ss);
}
/*
int	main(void)
{
	char	*str[] = {"bonjour", "Hola", "Guten Morgen"};

	ft_strs_to_tab(3, str);
	return (0);
}*/
