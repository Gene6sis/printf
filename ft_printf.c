/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:53:14 by adben-mc          #+#    #+#             */
/*   Updated: 2021/12/03 19:28:05 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_parameters(char c, va_list ap, int *i)
{
	if (c == 'c')
		return (ft_putchar((char)va_arg(ap, int), i));
	else if (c == 's')
		return (ft_putstr(va_arg(ap, char *), i));
	else if (c == 'p')
		return (ft_putstr(va_arg(ap, char *), i));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(ap, int), i));
	else if (c == 'u')
		return (ft_putunbr(va_arg(ap, unsigned int), i));//unsigned !!
	else if (c == 'x')
		return (ft_convert(va_arg(ap, long), i, 0));
	else if (c == 'X')
		return (ft_convert(va_arg(ap, long), i, 1));
	else
		ft_putchar('%', i);
}

int ft_printf(const char *fmt, ...)
{
    va_list ap;
    int i;
	int x;

	i = 0;
	x = 0;
    va_start(ap, fmt);
    while (fmt[x])
	{
	    if (fmt[x] == '%' && fmt[x + 1])
		{
			ft_parameters(fmt[x + 1], ap, &i);
			x += 2;
		}
		else
			ft_putchar(fmt[x++], &i);
	}
	va_end(ap);
	return (i);
}

/*

#include <stdio.h>


int main()
{
	
	ft_printf("Return : %i\n", ft_printf("pouet%s%x%%s\n", "coucou", " pulet"));


	printf("Return : %i\n", ft_printf("pouet%s%x%%s\n", "coucou", " pulet"));
}

*/