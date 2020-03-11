/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ystepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 21:18:09 by ystepane          #+#    #+#             */
/*   Updated: 2020/02/21 15:06:01 by ystepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, const char *src)
{
	int		index1;
	int		index2;

	index1 = 0;
	index2 = 0;
	while (src[index1] != '\0')
	{
		dst[index2] = src[index1];
		index2++;
		index1++;
	}
	dst[index2] = '\0';
	return (dst);
}
