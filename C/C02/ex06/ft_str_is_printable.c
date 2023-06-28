/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:44:10 by falberti          #+#    #+#             */
/*   Updated: 2023/06/12 13:06:20 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		i;
	int		check;
	char	*s;

	i = 0;
	check = 1;
	s = str;
	while (s[i] != '\0')
	{
		if (!(s[i] >= 32 && s[i] <= 126))
		{
			check = 0;
		}
		i++;
	}
	return (check);
}
