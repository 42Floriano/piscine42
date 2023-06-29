/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 17:57:43 by falberti          #+#    #+#             */
/*   Updated: 2023/06/28 19:40:12 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_checklen(int nb)
{
	int digit;

	digit = 1;
	while (nb > 9)
	{
		nb /= 10;
		digit++;
	}
	return (digit);
}

void	ft_putnbr(int nb, int i, char *str)
{
	printf("Test i: %d\n", i);
	if (nb == -2147483648)
	{
		str[i++] = '-';
		str[i] = '2';
		ft_putnbr(147483648, i, str);
	} 
	else if (nb < 0 )
	{
		str[i] = '-';
		nb = nb * -1;
		ft_putnbr(nb, ++i, str);
	}	
	else if (nb > 9){
		ft_putnbr(nb / 10, i, str);
		ft_putnbr(nb % 10, i++, str);
	}
	else
	{
		nb += 48;
		str[i] = nb; 
	}
}
char	*ft_itoa(int nb)
{
	int i;
	int digit;
	char *string;


	digit = ft_checklen(nb);
	printf("%d", digit);
	string = malloc(sizeof(char) * (digit + 1));
	i = 0;
	
	ft_putnbr(nb, 0, string);
	string[digit] = '\0';
	return (string);
}
int main (void)
{
	
	printf("test 12: %s\n", ft_itoa(1234));
	
//	printf("test -5: %s\n", ft_itoa(-5));
//	printf("test 0: %s\n", ft_itoa(0));
//	printf("test -1234567: %s\n", ft_itoa(-1234567));
//	printf("test 2147483647: %s\n", ft_itoa(2147483647));
	
	printf("test -2147483648: <%s>\n", ft_itoa(-2147483648));
	return (0);
}
