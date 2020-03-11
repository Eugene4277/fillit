/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ystepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 14:48:08 by ystepane          #+#    #+#             */
/*   Updated: 2020/02/25 14:02:04 by ystepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*c_dst;
	const char	*c_src;
	size_t		i;

	i = 0;
	c_dst = dst;
	c_src = src;
	if (!dst && !src)
		return (dst);
	if (c_src < c_dst)
		while (i++ < len)
			c_dst[len - i] = c_src[len - i];
	else
	{
		while (len-- > 0)
		{
			*c_dst = *c_src;
			c_dst++;
			c_src++;
		}
	}
	return (dst);
}
