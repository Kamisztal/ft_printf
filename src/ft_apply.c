/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <pmisztal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 13:00:35 by pmisztal          #+#    #+#             */
/*   Updated: 2026/11/10 14:24:20 by pmisztal         ###   ########.fr       */
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

int	ft_apply_basic(va_list ap, int type)
{
	int	count;

	count = 0;
	if (type == 4)
	{
		count = ft_intput(ap);
		return (count);
	}
	count = 0;
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
	count = 0;
	return (ft_apply_else(ap, type));
}

int	ft_apply_else(va_list ap, int type)
{
	int	count;

	count = 0;
	if (type == 9)
	{
		count = 1;
		ft_putchar_fd('%', 1);
		return (count);
	}
	count = 0;
	if (type == 6)
	{
		unsigned int	nb;
		nb = va_arg(ap, unsigned int);
		count = ft_unsignedput(nb);
		return (count);
	}
	return (ft_apply_hexa(ap, type));
}

int	ft_apply_hexa(va_list ap, int type)
{
	int	count;

	count = 0;
	if (type == 7)
	{
		unsigned int	nb;

		nb = va_arg(ap, unsigned int);
		count = ft_hexa_low_put(nb);
		return (count);
	}
	count = 0;
	if (type == 8)
	{
		unsigned int	nb;

		nb = va_arg(ap, unsigned int);
		count = ft_hexa_up_put(nb);
		return (count);
	}
	return (ft_apply_pointer(ap, type));
}

int	ft_apply_pointer(va_list ap, int type)
{
	int	count;

	count = 0;
	if (type == 3)
	{
		void	*ptr;

		ptr = va_arg(ap, void *);
		if (ptr == NULL)
		{
			ft_putstr_fd("(nil)", 1);
			return (5);
		}
		ft_putstr_fd("0x", 1);
		count = count + 2;
		count = count + ft_put_pointer((unsigned long)ptr);
		return (count);
	}
	return (count);
}
