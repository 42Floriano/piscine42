/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_cond.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvuadens <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:57:22 by vvuadens          #+#    #+#             */
/*   Updated: 2023/06/18 17:13:18 by vvuadens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_input_cond(int *views)
{
	if (!(3 <= (views[0] + views[4]) && (views[0] + views[4]) <= 5))
		return (0);
	if (!(3 <= (views[1] + views[5]) && (views[1] + views[5])<= 5))
		return (0);
	if (!(3 <= (views[2] + views[6]) && (views[2] + views[6]) <= 5))
		return (0);
	if (!(3 <= (views[3] + views[7]) && (views[3] + views[7])<= 5))
		return (0);
	if (!(3 <= (views[8] + views[12]) && (views[8] + views[12]) <= 5))
		return (0);
	if (!(3 <= (views[9] + views[13]) && (views[9] + views[13])<= 5))
		return (0);
	if (!(3 <= (views[10] + views[14]) && (views[10] + views[14]) <= 5))
		return (0);
	if (!(3 <= (views[11] + views[15]) && (views[11] + views[15]) <= 5))
		return (0);
	return (1);
}
