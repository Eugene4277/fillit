/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ystepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 19:01:30 by ystepane          #+#    #+#             */
/*   Updated: 2020/02/24 18:40:27 by ystepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*map_root;
	t_list	*map;
	t_list	*tmp;

	if (!lst || !f)
		return (0);
	map_root = 0;
	map = 0;
	while (lst)
	{
		tmp = f(lst);
		(!map) ?
			(map = ft_lstnew(tmp->content, tmp->content_size)) :
			(map->next = ft_lstnew(tmp->content, tmp->content_size));
		free(tmp);
		if (!map_root)
			map_root = map;
		if (!map)
			return (map_root);
		else if (map->next)
			map = map->next;
		lst = lst->next;
	}
	return (map_root);
}
