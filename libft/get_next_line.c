/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ystepane <ystepane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 12:58:20 by ystepane          #+#    #+#             */
/*   Updated: 2020/03/05 18:46:24 by ystepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*check_tail(char *tail, char **line)
{
	char			*p_n;

	p_n = NULL;
	if (tail)
		if ((p_n = ft_strchr(tail, '\n')))
		{
			*p_n = '\0';
			*line = ft_strdup(tail);
			p_n++;
			ft_strcpy(tail, p_n);
		}
		else
		{
			*line = ft_strdup(tail);
			ft_strclr(tail);
		}
	else
		*line = ft_strnew(1);
	return (p_n);
}

int		get_line(const int fd, char **line, char **tail)
{
	int				bytes_count;
	char			buff[BUFF_SIZE + 1];
	char			*p_n_l;
	char			*temp;

	p_n_l = check_tail(*tail, line);
	while (!p_n_l && (bytes_count = read(fd, buff, BUFF_SIZE)))
	{
		buff[bytes_count] = '\0';
		if ((p_n_l = ft_strchr(buff, '\n')))
		{
			*p_n_l = '\0';
			p_n_l++;
			*tail = ft_strdup(p_n_l);
		}
		temp = *line;
		*line = ft_strjoin(*line, buff);
		free(temp);
	}
	return (bytes_count || ft_strlen(*line) ? 1 : 0);
}

t_gnl	*create_new_elem(int fd)
{
	t_gnl			*new;

	new = (t_gnl*)malloc(sizeof(t_gnl));
	new->fd = fd;
	new->tail = NULL;
	new->next = NULL;
	return (new);
}

int		get_next_line(const int fd, char **line)
{
	static t_gnl	*head;
	t_gnl			*temp;
	char			buf[BUFF_SIZE];

	if (read(fd, buf, 0) < 0 || !line)
		return (-1);
	if (head == NULL)
		head = create_new_elem(fd);
	temp = head;
	while (temp->fd != fd)
	{
		if (temp->next == NULL)
			temp->next = create_new_elem(fd);
		temp = temp->next;
	}
	return (get_line(temp->fd, line, &temp->tail));
}
