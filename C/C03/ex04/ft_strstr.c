/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:42:20 by falberti          #+#    #+#             */
/*   Updated: 2023/06/14 16:48:17 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	if (!to_find[i])
		return (str);
	while (str[i])
	{
		while (str[i] == to_find[x] && to_find[x])
		{
			if (to_find[x + 1] == '\0')
			{
				return (&str[i - x]);
			}
			x++;
			i++;
		}
	i -= x;
	x = 0;
	i++;
	}
	return (0);
}
/*int	main(void)
{
	char	str1[] = "Salut ca va ?";
	char	str2[] = "ca";

	ft_strstr(str1, str2);
	return (0);
}*/
