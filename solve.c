/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ystepane <ystepane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 22:19:21 by ystepane          #+#    #+#             */
/*   Updated: 2020/03/11 16:01:41 by ystepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int    solve(t_figure *figure, char **square, int *dem, int *i)
{
	t_sub_point point;
	int j;

	j = 0;
	point.x = 0;
	point.y = 0;
	while (point.x < *dem && point.y < *dem)
	{
		while (square[point.x + figure[*i].cords[j].x][point.y + figure[*i].cords[j].y] == '.' &&
			(point.x + figure[*i].cords[j].x < *dem && point.x + figure[*i].cords[j].y < *dem))
		{
			square[point.x + figure[*i].cords[j].x][point.y + figure[*i].cords[j].y] = figure[*i].letter;
			j++;  
		}
		if (j == 3)
		{
			*i += 1;
			if (solve(figure, square, dem, i) != 0)
				return (1);
		}
		else 
		{
			clear_figure(figure, square, i, j, point);
			if (point.x < *dem)
				point.x += 1;
			else if (point.y < *dem) 
			{
				point.x = 0;
				point.y += 1;
			}
			else 
				return (0);
		}
	}
	*dem += 1;
	return (-1);
}