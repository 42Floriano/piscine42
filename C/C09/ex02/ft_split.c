/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 15:48:25 by falberti          #+#    #+#             */
/*   Updated: 2023/06/28 13:10:12 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_charset(char *charset, char c)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	char_count(char *str, char *charset, int i)
{
	int	count;

	count = 0;
	while (is_charset(charset, i) == 0 && str[i])
	{
		i++;
		count++;
	}
	return (count);
}

int	str_count(char *str, char *charset)
{
	int	i;
	int	count;

	i = 1;
	count = 0;
	if (str[0] && !is_charset(charset, str[0]))
		count++;
	while (str[i])
	{
		if (is_charset(charset, str[i - 1]) == 1
			&& (is_charset(charset, str[i]) == 0))
		{
			count++;
		}
		i++;
	}
	return (count);
}

char	*ft_create_new(char *str, char *charset, int i)
{
	char	*new;
	int		x;

	x = 0;
	new = malloc(sizeof(char) * (char_count(str, charset, i) + 1));
	while (is_charset(charset, str[i]) == 0 && str[i])
	{
		new[x] = str[i];
		i++;
		x++;
	}
	new[x] = '\0';
	return (new);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		x;
	char	**tab;

	i = 0;
	x = 0;
	tab = malloc(sizeof(*tab) * (str_count(str, charset)) + 1);
	if (tab == 0)
		return (0);
	while (str[i])
	{
		while (is_charset(charset, str[i]) == 1 && str[i])
			i++;
		if (str[i])
		{
			tab[x] = ft_create_new(str, charset, i);
			x++;
		}
		while (is_charset(charset, str[i]) == 0 && str[i])
			i++;
	}
	tab[x] = 0;
	return (tab);
}
/*
int main(void)
{
	char *str = "yduCImtAWkSMW38FcMEUdguWn	k6QGDL1OrZrjOVQ";
	char *charset = "	";
	char ** tab;
	int i;

	tab = ft_split(str, charset);
	i = 0;
	while (tab[i] != 0)
	{
		printf("%s\n", tab[i]);
		i++;
	}
	printf("%s\n", tab[i]);
	free(tab);
	return (0);
}
*/