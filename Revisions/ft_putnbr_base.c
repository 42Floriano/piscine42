/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 18:40:00 by falberti          #+#    #+#             */
/*   Updated: 2023/06/29 18:50:54 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char a)
{
	write(1, &a, 1);
}

void ft_putnbr_base(char *base, int nb)
{
	
}

int main (void)
{
	ft_putnbr_base();
	return (0);
}
