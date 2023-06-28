/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvuadens <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:02:53 by vvuadens          #+#    #+#             */
/*   Updated: 2023/06/18 17:37:33 by vvuadens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_double(int gb[4][4], int loc,int  value)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (gb[i][loc % 4] == value)
		{
			return (0);
		}
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (gb[loc / 4][i] == value)
		{
			return (0);
		}
		i++;
	}
	return(1);
}

int	col_up(int gb[4][4], int loc, int views[16])
{
	int	max_num;
	int	line;
	int	col;
	int view;

	max_num = 0;
	line = 0;
	col = loc % 4;
	if (loc / 4  == 3)
	{
		while (line < 4)
		{
			if (gb[line][col] > max_num)
			{
				max_num = gb[line][col];
				view++;
			}
			line++;
		}
		if (view == views[col])
			return (1);
	}
	return (0);
}
int	col_down(int gb[4][4], int loc, int views[19])
{
	int	max_num;
	int	line;
	int	col;
	int	view;

	max_num = 0;
	line = 3;
	col = loc % 4;
	if (loc / 4 == 3)
	{	
		while (line >=  0)
		{
			if (gb[line][col] > max_num)
			{	
				max_num = gb[line][col];
				view++;
			}
			line--;
		}
		if (view == views[col + 4])
			return (1);
	}
	return (0);
}
int	row_left(int gb[4][4], int loc, int views[19])
{
	int	max_num;
	int	line;
	int	col;
	int	view;

	max_num = 0;
	col = 0;
	line = loc / 4;
	if (loc % 4 == 3)
	{
		while (col < 4)
		{
			if (gb[line][col] > max_num)
			{
				max_num = gb[line][col];
				view++;
			}
			col++;
		}
		if (view == views[line + 8])
			return (1);
	}
	return (0);
}
int	row_right(int gb[4][4], int loc, int views[19])
{
	int	max_num;
	int	line;
	int	col;
	int	view;

	max_num = 0;
	col = 3;
	line = loc / 4;
	if (loc % 4 == 3)
	{
		while (col >= 0)
		{
			if (gb[line][col] > max_num)
			{
				max_num = gb[line][col];
				view++;
			}
			col--;
		}
		if (view == views[col + 12])
			return (1);
	}
	return (0);
}
	
int	ft_view(int gb[4][4], int loc, int value[16])
{
	if (col_up(gb, loc, value) && (col_down(gb, loc, value)))
		return (0);
	if (row_left(gb, loc, value) && (row_right(gb, loc, value)))
		return (0);

	return (1);
}
