#include <stdio.h>
#include <string.h>

void	ft_swap(int *one, int *two)
{
	int temp;
	
	temp = *one;
	*one = *two;
	*two = temp;
	
}

int main(void)
{

	int a = 0;
	int b = 1;
	ft_swap(&a, &b);
	printf("Res: %d, %d\n", a, b ); 
return (0);
}
