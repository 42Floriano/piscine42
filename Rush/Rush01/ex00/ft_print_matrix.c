/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvuadens <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:45:16 by vvuadens          #+#    #+#             */
/*   Updated: 2023/06/18 18:02:21 by vvuadens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_matrix(int gb[4][4])
{
	int		 i;
	int		 j;
	char	 nb;

	i = 0;
	while (i <  4)
	{
		j = 0;
		while (j < 4)
		{
			nb = gb[i][j] + 48;
			write(1, &nb, 1);
			if (j != 3)
			{
				write(1, " ", 1);
			}
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}	
	


