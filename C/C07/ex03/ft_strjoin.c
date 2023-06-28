/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 13:13:34 by falberti          #+#    #+#             */
/*   Updated: 2023/06/23 12:08:44 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	cs(int size, char **strs)
{
	int		i;
	int		ii;
	int		iii;

	i = 0;
	ii = 0;
	iii = 0;
	while (i < size)
	{
		while (strs[i][ii])
		{
			ii++;
		}
		iii += ii;
		ii = 0;
		i++;
	}
	return (iii + 1);
}

int	css(int size, char *sep)
{
	int	i;

	i = 0;
	if (size <= 0)
		return (0);
	while (sep[i])
		i++;
	return (i * (size - 1));
}

char	*ft_strjoin(int s, char **strs, char *sep)
{
	int		i;
	int		ii;
	int		iii;
	char	*to_return;

	i = -1;
	ii = 0;
	if (s == 0)
	{
		to_return = (char *)malloc(sizeof(char));
		to_return[0] = '\0';
		return (to_return);
	}
	to_return = (char *)malloc(sizeof(char) * (cs(s, strs) + css(s, sep)));
	while (++i < s)
	{
		iii = 0;
		while (strs[i][iii])
			to_return[ii++] = strs[i][iii++];
		iii = 0;
		while (sep[iii] && i != s - 1)
			to_return[ii++] = sep[iii++];
	}
	to_return[ii] = '\0';
	return (to_return);
}
/*
int	main(void)
{
	char	*test;
	char	*arr[] = { "", "Hello", "", "world" };

	test = ft_strjoin(4, arr, "--");
	printf("Test: %s", test);
	free(test);
	return (0);
}*/
