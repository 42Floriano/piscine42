/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvuadens <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 09:23:24 by vvuadens          #+#    #+#             */
/*   Updated: 2023/06/18 14:17:59 by vvuadens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int ft_check_array(int *array);
int *ft_to_clean_array(char *str);
int ft_input_cond(int views[]);
int	ft_double(int gb[4][4], int loc,int  value);
int	ft_view(int gb[4][4], int loc, int value[19]);
void	ft_print_matrix(int gb[4][4]);

int solve(int gb[4][4], int loc, int views[16])
{
	int	i;
	int	value;

	value = 1;
	if (loc == 16)
		return (1);
	while (value < 5)
	{
		if (ft_double(gb, loc, value)==1)
		{
			gb[loc / 4][loc % 4] = value;
			if (ft_view(gb, loc, views) == 1)
			{
				if (solve(gb, loc+1, views) == 1)
					return (1);
			}
			else
				gb[loc / 4][loc % 4] = 0;
		}
		value++;
	}
	return (0);
}			
int	main(int argc, char *argv[])
{
	int i;
	int *array_int;
	
	int	gb[4][4]={
		{0,0,0,0},
		{0,0,0,0},
		{0,0,0,0},
		{0,0,0,0}
	};
	// check si argc ne contient que 2 arguments
	if(argc != 2)
	{
		write(2, "Entrer des conditons dans 1 seul string s.v.p !", 47);
		return (0);
	} 
	// trasnforme char array en array de int
	array_int = ft_to_clean_array(argv[1]);
	// verif la taille de array_int = 15

	if(ft_check_array(array_int))
	{
		write(2, "Entrer 16 params svp, entre 1 et 4 s.v.p !", 42);
		return (0);
	}
	if(ft_input_cond(array_int) == 0){
		write(2, "Conditions impossible | total max 5 et min 3 par ligne", 54);
		return (0);
	}
	if(solve(gb,0,array_int))
	ft_print_matrix(gb);
}
