/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   figure_falidate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ystepane <ystepane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 23:15:20 by ystepane          #+#    #+#             */
/*   Updated: 2020/03/08 21:02:24 by ystepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_point *figure_falidate(char *line, int *l_number, int *j)
{
    static t_point array[4];
    int i;
    int common_ed;
    
    i = 0;
    while (line[i])
    {
        if  (line[i] == '#')    
        {
            array[*j].x = i;
            array[*j].y = *l_number;
            array[*j].point_number = *j + 1;
            *j += 1;
            if (*j > 4)
                return (NULL);
        }
        i++;
    }   
    if (i)
        *l_number += 1;
    if (*l_number == 4)
    {   
        *j = 0;
        common_ed = common_edges(array);
        if ((common_ed == 3 || common_ed == 4) && array[3].point_number == 4)
            return(array);
        else 
            return (NULL);
    }
    return (array);
}