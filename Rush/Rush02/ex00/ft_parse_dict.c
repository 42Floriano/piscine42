/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_dict.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:33:13 by falberti          #+#    #+#             */
/*   Updated: 2023/06/25 23:04:10 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	ft_file_len(char *filename)
{
	int		size;
	int		temp;
	int		fd;
	char	*buffer;

	temp = 1;
	size = 0;
	fd = open(filename, O_RDONLY);
	buffer = malloc(10000 * sizeof(char));
	if (buffer == 0)
		return (0);
	while (temp)
	{
		temp = read(fd, buffer, 1000);
		size += temp;
	}
	close(fd);
	free(buffer);
	return (size);
}

char	*ft_parse_dict(char *filename)
{
	char	*resultat;
	int		size;
	int		fd;

	fd = open(filename, O_RDONLY);
	size = ft_file_len(filename);
	resultat = malloc(size + 1);
	if (resultat == 0)
		return (0);
	read(fd, resultat, size);
	resultat[size] = 0;
	return (resultat);
}
