/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:42:20 by falberti          #+#    #+#             */
/*   Updated: 2023/06/13 18:27:23 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	ii;

	i = 0;
	ii = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[ii])
	{
		dest[i] = src[ii];
		i++;
		ii++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int	main(void)
{
	char str1[] = "";
	char str2[] = "";

	ft_strcat(str1, str2);
	return (0);
}*/
