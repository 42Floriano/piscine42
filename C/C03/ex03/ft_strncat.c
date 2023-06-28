/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:42:20 by falberti          #+#    #+#             */
/*   Updated: 2023/06/14 16:43:50 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	ii;

	i = 0;
	ii = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[ii] && nb)
	{
		dest[i] = src[ii];
		i++;
		ii++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	str1[] = "Hello ";
	char	str2[] = "world";
	int		n = 5;

	ft_strncat(str1, str2, n);
	return (0);
}*/
