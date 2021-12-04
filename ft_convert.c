/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:18:39 by adben-mc          #+#    #+#             */
/*   Updated: 2021/12/04 21:04:14 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(int nb, int *val, char *base)
{
	long int	nbr;
	int			length;
	long int	cpy;

	length = 1;
	nbr = nb;
	if (nb < 0)
	{
		nbr *= -1;
		ft_putchar('-', val);
		length++;
	}
	cpy = nbr;
	while (cpy >= 16)
	{
		cpy /= 16;
		length++;
	}
	if (nbr >= 16)
		ft_puthex(nbr / 16, val, base);
	ft_putchar(base[nbr % 16], val);
}

void ft_convert(int nbr, int *val, int maj)
{
	if (maj == 0)
		ft_puthex(nbr, val, "0123456789abcdef");
	else
		ft_puthex(nbr, val, "0123456789ABCDEF");
}
