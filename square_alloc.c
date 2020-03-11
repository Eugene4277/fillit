/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square_alloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ystepane <ystepane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 22:29:32 by ystepane          #+#    #+#             */
/*   Updated: 2020/03/10 23:54:47 by ystepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char **square_alloc(int *dem)
{   
	char **square;
	char *line;
	int i;
	int j;

	i = 0;
	j = 0;
	if(!(square = (char**)malloc(sizeof(char) * (*dem))))
		return (NULL);
	while (i < *dem)
	{
		if(!(line = (char*)malloc(sizeof(char) * ((*dem) + 1))))
			return (NULL);
		while (j < *dem)
		{
			line[j] = '.';
			j++;
		}
		line[j] = '\0';
		square[i] = line;
		i++;
		j = 0;
	}
	return (square);
}