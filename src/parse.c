/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <pmisztal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 13:00:35 by pmisztal          #+#    #+#             */
/*   Updated: 2026/11/09 17:59:34 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_detecttype(int i)
{
	if (i == 'c')
		return (1);
	if (i == 's')
		return (2);
	if (i == 'p')
		return (3);
	if (i == 'd' || i == 'i')
		return (4);
	if (i == 'u')
		return (6);
	if (i == 'x')
		return (7);
	if (i == 'X')
		return (8);
	if (i == '%')
		return (9);
	return (0);
}

int	ft_intput(va_list ap)
{
	int		res;
	char	*oct;
	int		countoct;

	res = 0;
	res = va_arg(ap, int);
	ft_putnbr_fd(res, 1);
	oct = ft_itoa(res);
	countoct = ft_strlen(oct);
	return (countoct);
}

int	ft_charput(va_list ap)
{
	char	c;

	c = va_arg(ap, int);
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_stringput(va_list ap)
{
	int		count;
	char	*str;

	count = 0;
	str = va_arg(ap, char *);
	ft_putstr_fd(str, 1);
	count = ft_strlen(str);
	return (count);
}

int	ft_apply(va_list ap, int type)
{
	int	count;

	count = 0;
	if (type == 4)
	{
		count = ft_intput(ap);
		return (count);
	}
	if (type == 1)
	{
		ft_charput(ap);
		return (1);
	}
	count = 0;
	if (type == 2)
	{
		count = ft_stringput(ap);
		return (count);
	}
	return (0);
}
