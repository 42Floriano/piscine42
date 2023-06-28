/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 16:46:09 by falberti          #+#    #+#             */
/*   Updated: 2023/06/13 19:12:08 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] && s2[i] && s1[i] == s2[i] && n - 1)
	{
		i++;
		n--;
	}
	return (s1[i] - s2[i]);
}
/*int	main(void)
{
	char str1[] = "";
	char str2[] = "";
	int n = 0;

	ft_strncmp(str1, str2, n);
	return (0);
}*/
