/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_clean_array.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 22:04:25 by falberti          #+#    #+#             */
/*   Updated: 2023/06/15 22:21:52 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_mini_atoi(char *str);
#include <stdlib.h>

int *ft_to_clean_array(char *str)
{
  int i;
  int ii;
  int *liste;
  // use malloc.
  liste = (int *)malloc(sizeof(*liste) * 16);
  i = 0;
  ii = 0;
  while(str[i])
  {
    
    if(str[i] >= 48 && str[i] <= 57)
    	{
      liste[ii] = ft_mini_atoi(&str[i]);
      ii++;
      }
    i++;
  }
    return (liste);
}