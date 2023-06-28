/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 16:40:37 by falberti          #+#    #+#             */
/*   Updated: 2023/06/15 19:07:45 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base)
{
	int count;

	count = 0;
	while(base[count])
	{
		count++;
	}

	while(nbr)
	{	
	   printf("%c", base[nbr / count]);
	   printf("%c", base[nbr % count]);
	nbr /= count;
	}
}

int main(void)
{
	int nb;
	char base[] = "0123456789";
	nb = 2;

	ft_putnbr_base(nb, base);
}
