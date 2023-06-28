/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:09:55 by falberti          #+#    #+#             */
/*   Updated: 2023/06/12 12:30:45 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		i;
	int		check;
	char	*s;

	i = 0;
	check = 1;
	s = str;
	while (s[i] != '\0')
	{
		if (!(s[i] >= 'a' && s[i] <= 'z'))
		{
			check = 0;
		}
		i++;
	}
	return (check);
}
