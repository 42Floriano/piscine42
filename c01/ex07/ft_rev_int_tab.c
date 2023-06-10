/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:15:43 by falberti          #+#    #+#             */
/*   Updated: 2023/06/09 14:38:21 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	pos;
	int	newarray;

	i = size -1;
	pos = 0;
	while (pos < i)
	{
		newarray = tab[pos];
		tab[pos] = tab[i];
		tab[i] = newarray;
		i--;
		pos++;
	}
}
