/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:18:39 by adben-mc          #+#    #+#             */
/*   Updated: 2021/12/05 16:31:22 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int nb, int *val, char *base)
{
	unsigned long int	nbr;
	int					length;
	unsigned long int	cpy;

	length = 1;
	nbr = nb;
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

void	ft_convert(unsigned int nbr, int *val, int maj)
{
	if (maj == 0)
		ft_puthex(nbr, val, "0123456789abcdef");
	else
		ft_puthex(nbr, val, "0123456789ABCDEF");
}
