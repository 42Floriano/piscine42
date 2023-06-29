#include <stdio.h>
#include <string.h>
#include <string.h>

int	ft_strcmp(char *stro, char* strt)
{
	int i;

	i = 0;

	while (stro[i] ||  strt[i])
	{
		if(stro[i] != strt[i])
		{
			return (stro[i] - strt[i]);
		}
		i++;
	}
	return (stro[i] - strt[i]);

}

int main(int ac, char **av)
{
	//char *str_one = "abc";
	//char *str_two = "abcd";
	if (ac != 3)
		return(1);
	printf("Res: %d,\n", ft_strcmp(av[1], av[2])); 
	printf("Res 2: %d,\n", strcmp(av[1], av[2])); 
return (0);
}
