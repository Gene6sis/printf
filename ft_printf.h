/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <adben-mc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:54:37 by adben-mc          #+#    #+#             */
/*   Updated: 2021/12/04 20:49:52 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *fmt, ...);
void	ft_putchar(char c, int *val);
void	ft_putnbr(int nb, int *val);
void	ft_putunbr(unsigned int nb, int *val);
void	ft_putstr(char *str, int *val);
char	*ft_strupcase(char *str);
void	ft_convert(int nbr, int *i, int maj);
void	ft_pointer(unsigned long int, int *i);
void	ft_base_hex(unsigned long int nb, int *val);

#endif