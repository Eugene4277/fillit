/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ystepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 16:13:01 by ystepane          #+#    #+#             */
/*   Updated: 2020/02/25 15:24:55 by ystepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lst;

	lst = (t_list *)ft_memalloc(sizeof(t_list));
	if (!lst)
		return (0);
	if (!content)
	{
		lst->content = 0;
		lst->content_size = 0;
		lst->next = 0;
		return (lst);
	}
	lst->content = ft_memalloc(content_size);
	if (!lst->content)
	{
		free(lst);
		return (0);
	}
	ft_memcpy(lst->content, content, content_size);
	lst->content_size = content_size;
	lst->next = 0;
	return (lst);
}
