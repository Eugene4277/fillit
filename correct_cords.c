/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   correct_cords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ystepane <ystepane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 23:02:05 by ystepane          #+#    #+#             */
/*   Updated: 2020/03/09 23:18:57 by ystepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_point *correct_cords(t_point *cords)
{
    while ((cords[0]).x && (cords[1]).x && (cords[2]).x && (cords[3]).x)
    {
       (cords[0]).x -= 1;
       (cords[1]).x -= 1;
       (cords[2]).x -= 1;
       (cords[3]).x -= 1; 
    }
    while ((cords[0]).y && (cords[1]).y && (cords[2]).y && (cords[3]).y)
    {
       (cords[0]).y -= 1;
       (cords[1]).y -= 1;
       (cords[2]).y -= 1;
       (cords[3]).y -= 1; 
    }
    return (cords);
}