/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 19:28:32 by adben-mc          #+#    #+#             */
/*   Updated: 2021/12/03 19:30:20 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr(unsigned int nb, int *val)
{
	long long int	nbr;

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
