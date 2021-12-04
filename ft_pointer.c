/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:48:17 by adben-mc          #+#    #+#             */
/*   Updated: 2021/12/04 18:32:39 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_base_hex(unsigned long int nb, int *val)
{
	const char	*base = "0123456789abcdef";

	if (nb <= 15)
		ft_putchar(base[nb % 16], val);
	if (nb > 15)
	{
		ft_base_hex(nb / 16, val);
		ft_putchar(base[nb % 16], val);
	}
}

void	ft_pointer(unsigned long int addr, int *val)
{
	if (addr == 0)
	{
		ft_putstr("0x0", val);
		return ;
	}
	ft_putstr("0x", val);
	ft_base_hex(addr, val);
}
