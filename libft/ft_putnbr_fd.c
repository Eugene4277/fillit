/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ystepane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 16:27:13 by ystepane          #+#    #+#             */
/*   Updated: 2020/02/21 15:08:21 by ystepane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long		is_negative(int nb, int fd)
{
	long	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		return (nbr * (-1));
	}
	return (nb);
}

static int		ft_count(long nb)
{
	int		no_num;

	no_num = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb = nb / 10;
		no_num++;
	}
	return (no_num);
}

void			ft_putnbr_fd(int nb, int fd)
{
	long	save_nb;
	long	copy;
	int		no_num;
	int		i;
	int		j;

	i = 1;
	j = 0;
	no_num = 0;
	save_nb = is_negative(nb, fd);
	copy = save_nb;
	no_num = ft_count(copy);
	while (i <= no_num)
	{
		while (j < no_num - i)
		{
			save_nb /= 10;
			j++;
		}
		ft_putchar_fd((save_nb % 10) + '0', fd);
		save_nb = copy;
		i++;
		j = 0;
	}
}
