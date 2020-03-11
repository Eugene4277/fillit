/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_validate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ystepane <ystepane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 19:02:29 by ystepane          #+#    #+#             */
/*   Updated: 2020/03/08 21:07:16 by ystepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int line_validate(char *line, int *l_count)
{
    int counter;

    counter = 0;
    while (line[counter])
        if (line[counter] == '.' || line[counter] == '#')
            counter++;
        else
            return (0);
    if (counter == 0)
    {
        if (*l_count == 4)
        {   
            *l_count = 0;
            return (1);
        }
        else
            return (0);
    }
    *l_count += 1;
    if (counter == 4)
        return (1);
    return (0);
}