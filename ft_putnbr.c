/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 17:08:24 by adben-mc          #+#    #+#             */
/*   Updated: 2021/12/03 19:02:39 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *val)
{
	long int	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		ft_putchar('-', val);
		nbr *= -1;
	}
	if (nbr <= 9 && nbr >= 0)
	{
		ft_putchar(nbr + '0', val);
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10, val);
		ft_putchar(nbr % 10 + '0', val);
	}
}
