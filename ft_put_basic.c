/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsebasic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <pmisztal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 21:09:57 by pmisztal          #+#    #+#             */
/*   Updated: 2026/11/10 14:23:44 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_intlen(int nb)
{
	int	count;

	count = 0;
	if (nb <= 0)
		count++;
	while (nb != 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

int	ft_intput(va_list ap)
{
	int		res;
	int		size;

	size = 0;
	res = 0;
	res = va_arg(ap, int);
	ft_putnbr_fd(res, 1);
	size = ft_intlen(res);
	return (size);
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
	char	*str;

	str = va_arg(ap, char *);
	if (str == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int	ft_unsignedput(unsigned	int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count = count + ft_unsignedput(n / 10);
	ft_putchar_fd(n % 10 + '0', 1);
	count++;
	return (count);
}
