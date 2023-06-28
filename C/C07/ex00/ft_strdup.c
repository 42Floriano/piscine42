/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:14:01 by falberti          #+#    #+#             */
/*   Updated: 2023/06/22 18:03:08 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_checksize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*retour;
	int		i;

	i = 0;
	retour = (char *)malloc ((ft_checksize(src) + 1) * sizeof(char));
	if (retour == 0)
		return (0);
	while (src[i])
	{
		retour[i] = src[i];
		i++;
	}
	retour[i] = '\0';
	return (retour);
}

/*int main(void)
{
	char *hello = "Hello";
	printf("%s", ft_strdup(hello));
	return (0);
}*/
