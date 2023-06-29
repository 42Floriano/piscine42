/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revers_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 12:48:55 by falberti          #+#    #+#             */
/*   Updated: 2023/06/29 13:19:03 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_checklen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i - 1);
}

void	ft_reverse_str(char *str)
{
	char	temp;
	int		debut;
	int		fin;

	debut = 0;
	fin = ft_checklen(str);
	while (debut < fin)
	{
		temp = str[debut];
		str[debut] = str[fin];
		str[fin] = temp;
		debut++;
		fin--;
	}
}

int	main(void)
{
	char str[] = "Bonjour ma caille !";

	ft_reverse_str(str);
	printf("Test: %s\n", str);
	return (0);
}
