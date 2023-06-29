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
	if(nb < 0)
		digit++;
	while (nb < 9 || nc)
	{
		nb /= 10;
		digit++;
	}
	return (digit);
}


char	*ft_itoa(int nb)
{
	int i;
	int digit;
	char *string;


	digit = ft_checklen(nb);
	printf("%d", digit);
	string = malloc(sizeof(char) * (digit + 1));
	string[digit] = '\0';
	digit--;
	while (0 <= digit)
	{
			
		string[digit] = (nb % 10) + 48;
		nb /= 10;
		digit--;
	}
	return (string);
}
int main (void)
{
	
	printf("test 12: %s\n", ft_itoa(1234));
	
//	printf("test -5: %s\n", ft_itoa(-5));
//	printf("test 0: %s\n", ft_itoa(0));
	printf("test -1234567: %s\n", ft_itoa(-1234567));
//	printf("test 2147483647: %s\n", ft_itoa(2147483647));
	
	printf("test -2147483648: <%s>\n", ft_itoa(-2147483648));
	return (0);
}
