/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 13:21:31 by falberti          #+#    #+#             */
/*   Updated: 2023/06/29 13:38:46 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int		i;
	int		size;
	char	*copy;

	i = 0;
	size = 0;
	while (str[size])
		size++;
	copy = malloc(sizeof(char) * (size + 1));
	while (i < size)
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

int	main(void)
{
	char	str[] = "coucou";

	printf("test: %s\n", ft_strdup(str));
	return (0);	
}
