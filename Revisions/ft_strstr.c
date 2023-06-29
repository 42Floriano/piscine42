/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 16:44:18 by falberti          #+#    #+#             */
/*   Updated: 2023/06/29 17:05:14 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strstr(char *str, char *tofind)
{
	int i;
	int x;
	int p;
	
	p = 0;
	x = 0;
	i = 0;
	while(str[i] && tofind[x])
	{
		p = i;
		while(str[i] == tofind[x])
		{
			i++;
			x++;
			if(tofind[x] == '\0')
				return &str[p];
		}
		i++;
	}
	return (NULL);
}

int main (void)
{
	char str[] = "Salut, ca va canard?";
	char tofind[] = "can";
	printf("test: %s\n", ft_strstr(str, tofind));
	return (0);
}
