
#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	if(nb == -2147483648)
	{
		write(1, "-2147483648", 11); 
	} 
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else 
	{
		nb += 48;
		ft_putchar(nb);
	}
}
int main (void)
{
ft_putnbr(1234);
ft_putnbr(-1234);
ft_putnbr(0);
ft_putnbr(-2147483648);
ft_putnbr(2147483647);
ft_putnbr(5);
ft_putnbr(-5);

return (0);
}
