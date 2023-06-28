/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:09:55 by falberti          #+#    #+#             */
/*   Updated: 2023/06/12 12:42:03 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		i;
	int		check;
	char	*s;

	i = 0;
	check = 1;
	s = str;
	while (s[i] != '\0')
	{
		if (!(s[i] >= 'A' && s[i] <= 'Z'))
		{
			check = 0;
		}
		i++;
	}
	return (check);
}
