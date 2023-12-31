/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_second.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 17:57:43 by falberti          #+#    #+#             */
/*   Updated: 2023/06/29 12:47:22 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_checklen(int nb)
{
	int	digit;

	digit = 1;
	if (nb < 0)
	{
		digit++;
	}
	while (nb > 9 || nb < -9)
	{
		nb /= 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int nb)
{
	int		test;
	int		digit;
	char	*string;

	test = 0;
	digit = ft_checklen(nb);
	string = malloc(sizeof(char) * (digit + 1));
	string[digit--] = '\0';
	if (nb == -2147483648)
	{
		string[0] = '-';
		string[1] = '2';
		nb = 147483648;
		test = 2;
	}
	if (nb < 0)
	{
		string[0] = '-';
		nb *= -1;
		test = 1;
	}
	while (test <= digit)
	{		
		string[digit--] = (nb % 10) + 48;
		nb /= 10;
	}
	return (string);
}

int	main(void)
{	
	printf("test 12: %s\n", ft_itoa(1234));
	printf("test -5: %s\n", ft_itoa(-5));
	printf("test 0: %s\n", ft_itoa(0));
	printf("test -1234567: %s\n", ft_itoa(-1234567));
	printf("test 2147483647: %s\n", ft_itoa(2147483647));
	printf("test -2147483648: %s\n", ft_itoa(-2147483648));
	return (0);
}
