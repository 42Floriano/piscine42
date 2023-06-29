/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 18:51:18 by falberti          #+#    #+#             */
/*   Updated: 2023/06/29 19:34:54 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_checksep(char *sep, int s)
{
	int i;

	i = 0;
	while(sep[i])
	{
		i++;
	}
	i *= (s-1);
	printf("Verif seplen: %d\n", i);
	return (i);
}

int ft_checkstrs(char **strs, int s)
{
	int i;
	int x;
	int count;

	count = 0;
	i = 0;
	x = 0;
	while(i < (s-1))
	{
		while(strs[i][x])
		{
			x++;
		}
		count += x;
		x = 0;
		i++;
	}
	printf("Verif strslen: %d\n", count); 
	return (count);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	int x;
	int y;
	char *result;

	i = 0;
	x = 0;
	y = 0;
	result = malloc(sizeof(char) * (ft_checksep(sep, size) + ft_checkstrs(strs, size) + 1));
	if (result == NULL)
		return (NULL);

	while(i < (size))
	{
		while(strs[i][y])
		{
			result[x] = strs[i][y];
			x++;
			y++;
		}
		y = 0;
		while(sep[y])
		{
			result[x] = sep[y];
			y++;
			x++;
		}
		y = 0;
		i++;
	}
	result[x] = '\0';
	return (result);
}

int main (void)
{
	char *strs[] = {"salut", "je", "suis", "!"};
	char *sep = " ";

	printf("Final test: %s\n", ft_strjoin(4, strs, sep));
	return (0);
}
