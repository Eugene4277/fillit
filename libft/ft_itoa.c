/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ystepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 12:06:04 by ystepane          #+#    #+#             */
/*   Updated: 2020/02/25 14:04:08 by ystepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_count(long n)
{
	int		i;

	i = 0;
	if (n < 0)
	{
		n *= (-1);
		i++;
	}
	if (n == 0)
		i++;
	while (n >= 1)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	int		len;
	char	*int_str;
	long	nb;

	nb = n;
	len = digit_count(nb);
	if (!(int_str = (char*)ft_memalloc(sizeof(char) * (len + 1))))
		return (NULL);
	int_str[len--] = '\0';
	if (nb == 0)
		int_str[0] = '0';
	if (nb < 0)
	{
		int_str[0] = '-';
		nb = nb * -1;
	}
	while (nb >= 1)
	{
		int_str[len--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (int_str);
}
