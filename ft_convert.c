/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 18:18:39 by adben-mc          #+#    #+#             */
/*   Updated: 2021/12/03 19:02:31 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_size(long nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
	{
		nb = -nb;
		i += 1;
	}
	while (nb)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_hexa(long nbr, char *conv, int size, int pos)
{
	char	*base;

	base = "0123456789abcdef";
	if (nbr / 16 > 0 && pos < size)
		ft_hexa(nbr / 16, conv, size, pos + 1);
	conv[size - pos] = base[nbr % 16];
	return (conv);
}

void ft_convert(long nbr, int *i, int maj)
{
	char *str;

	str = malloc(sizeof(char) * (ft_size(nbr) + 1));
	if (!str)
		return ;
	str = ft_hexa(nbr, str, ft_size(nbr), 0);
	if (maj == 0)
		ft_putstr(str, i);
	else
		ft_putstr(ft_strupcase(str), i);
	free(str);	
}
