/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_and_replace.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 16:35:53 by falberti          #+#    #+#             */
/*   Updated: 2023/06/29 16:42:26 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_search_and_replace(char *str, char *a, char *b)
{
int i = 0;
while(str[i])
{
	if(str[i] == a[0])
	{
		write(1, &b[0], 1);
	} else {
		write(1, &str[i], 1);
	}
	i++;
}
}
int main (int ac, char **av)
{
	ft_search_and_replace(av[1], av[2], av[3]);
	return (0);
}
