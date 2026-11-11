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

#include "../includes/ft_printf.h"

int	ft_intput(va_list ap)
{
	int		res;
	char	*oct;
	int		countoct;

	res = 0;
	countoct = 0;
	res = va_arg(ap, int);
	ft_putnbr_fd(res, 1);
	oct = ft_itoa(res);
	if (oct == NULL)
		return (countoct);
	countoct = ft_strlen(oct);
	free(oct);
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
