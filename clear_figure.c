/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_figure.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ystepane <ystepane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 16:41:57 by ystepane          #+#    #+#             */
/*   Updated: 2020/03/10 20:39:50 by ystepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void clear_figure(t_figure *figure, char **square, int *i, int j, t_sub_point point)
{
    while (j >= 0)
    {
        square[point.x + figure[*i].cords[j].x][point.y + figure[*i].cords[j].y] = '.';
        j--;
    }
}