/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:31:40 by falberti          #+#    #+#             */
/*   Updated: 2023/06/25 23:29:42 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERS_H
# define HEADERS_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>

int		ft_check_len(char *str);
void	ft_putchar(char a);
void	ft_putstr(char *str);
long	ft_atoi_and_check(char *str);
char	*ft_parse_dict(char *filename);
int		ft_file_len(char *filename);
char	*ft_strstr(char *str, char *to_find);
void	ft_read_dict(char *dico);
void	ft_write_dict(char *dico);

#endif
