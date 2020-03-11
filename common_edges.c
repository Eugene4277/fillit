/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   common_edges.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ystepane <ystepane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 18:21:33 by ystepane          #+#    #+#             */
/*   Updated: 2020/03/07 18:22:48 by ystepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int common_edges(t_point *array)
{
    int ed_count;

    ed_count = 0;
    if ((array[0].x == array[1].x && abs(array[0].y - array[1].y) == 1) || 
        (array[0].y == array[1].y && abs(array[0].x - array[1].x) == 1))
        ed_count++;
    if ((array[0].x == array[2].x && abs(array[0].y - array[2].y) == 1) || 
        (array[0].y == array[2].y && abs(array[0].x - array[2].x) == 1))
        ed_count++;
    if ((array[0].x == array[3].x && abs(array[0].y - array[3].y) == 1) || 
        (array[0].y == array[3].y && abs(array[0].x - array[3].x) == 1))
        ed_count++;
    if ((array[1].x == array[2].x && abs(array[1].y - array[2].y) == 1) || 
        (array[1].y == array[2].y && abs(array[1].x - array[2].x) == 1))
        ed_count++;
    if ((array[1].x == array[3].x && abs(array[1].y - array[3].y) == 1) || 
        (array[1].y == array[3].y && abs(array[1].x - array[3].x) == 1))
        ed_count++;
    if ((array[2].x == array[3].x && abs(array[2].y - array[3].y) == 1) || 
        (array[2].y == array[3].y && abs(array[2].x - array[3].x) == 1))
        ed_count++;
    return (ed_count);
}