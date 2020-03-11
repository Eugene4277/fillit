/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ystepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 15:24:10 by ystepane          #+#    #+#             */
/*   Updated: 2020/02/20 15:27:50 by ystepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*result;

	if (!s || !(result = ft_memalloc(len + 1)))
		return (NULL);
	result = ft_strncpy(result, (char*)s + start, len);
	return (result);
}
