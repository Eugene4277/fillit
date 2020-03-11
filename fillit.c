/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ystepane <ystepane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 20:08:41 by ystepane          #+#    #+#             */
/*   Updated: 2020/03/11 16:01:15 by ystepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int main(int argc, char **argv)
{
	char *line;
	int fd;
	int l_count = 0;
	int l_number = 0;
	t_point *f_val_ret;
	int j = 0;
	t_figure figure[26];
	int k;
	int dem;
	char **square;
	unsigned char c = 65;
	int n = 0;
	int m = 0;
	int b = 0;


	fd = open("text.txt", O_RDONLY);
	k = 0;
	dem = 4;
	while (get_next_line(fd, &line)) 
	{
		if (line_validate(line, &l_count) == 0)
		{
			printf("Validation error\n");
			return (0);
		}
	   // else
		  //  printf("ok: %d\n", l_count);
		f_val_ret = figure_falidate(line, &l_number, &j);
		if (f_val_ret != NULL && (f_val_ret[3]).point_number == 4 && l_number == 4)
		{
			//printf("point1 : %d,%d  point_num: %d\n", (f_val_ret[0]).x, (f_val_ret[0]).y, (f_val_ret[0]).point_number);
			//printf("point2 : %d,%d  point_num: %d\n", (f_val_ret[1]).x, (f_val_ret[1]).y, (f_val_ret[1]).point_number);
			//printf("point3 : %d,%d  point_num: %d\n", (f_val_ret[2]).x, (f_val_ret[2]).y, (f_val_ret[2]).point_number);
			//printf("point4 : %d,%d  point_num: %d\n\n", (f_val_ret[3]).x, (f_val_ret[3]).y, (f_val_ret[3]).point_number);
			f_val_ret = correct_cords(f_val_ret);
			figure[k].cords[0] = f_val_ret[0];
			figure[k].cords[1] = f_val_ret[1];
			figure[k].cords[2] = f_val_ret[2];
			figure[k].cords[3] = f_val_ret[3];
			figure[k].letter = k + c;
			//printf("point1 : %d,%d\n", figure[k].cords[0].x, figure[k].cords[0].y);
			//printf("point2 : %d,%d\n", figure[k].cords[1].x, figure[k].cords[1].y);
			//printf("point3 : %d,%d\n", figure[k].cords[2].x, figure[k].cords[2].y);
			//printf("point4 : %d,%d\n", figure[k].cords[3].x, figure[k].cords[3].y);
			//printf("%d\n\n", k);
			printf("letter : %c\n", figure[k].letter);
			k++;
			l_number = 0;
			(f_val_ret[3]).point_number = 0;
		}
		else if (f_val_ret == NULL)
		{
			printf("some figure is wrong\n");
			return (0);
		}
	}
	square = square_alloc(&dem);
	while (solve(figure, square, &dem, &n) == -1)
	{
		square = square_alloc(&dem);
	}
	while (b < dem)
	{
		while (m < dem)
		{
			printf("%c", square[m][b]);
			m++;
		}
		b++; 
	}
	return (0);
}
