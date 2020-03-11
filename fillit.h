/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ystepane <ystepane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 20:22:51 by ystepane          #+#    #+#             */
/*   Updated: 2020/03/10 18:25:31 by ystepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft/libft.h"

typedef struct      s_point
{
    int             x;
    int             y;
    int             point_number;
}                   t_point;

typedef struct      s_figure
{
    t_point         cords[4];
    char            letter;
}                   t_figure;

typedef struct      s_sub_point
{
    int             x;
    int             y; 
}                   t_sub_point;


int line_validate(char *line, int *l_count);
t_point *figure_falidate(char *line, int *l_number, int *j);
int common_edges(t_point *array);
int    solve(t_figure *figure, char **square, int *dem, int *i);
char **square_alloc(int *dem);
t_point *correct_cords(t_point *cords);
void clear_figure(t_figure *figure, char **square, int *i, int j, t_sub_point point);


#endif
