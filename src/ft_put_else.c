/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_else.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <pmisztal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 15:59:27 by pmisztal          #+#    #+#             */
/*   Updated: 2026/11/11 15:59:27 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_hexa_low_put(unsigned int n)
{
	char	*base;
	int		count;

	base = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count = count + ft_hexa_low_put(n / 16);
	ft_putchar_fd(base[n % 16], 1);
	count++;
	return (count);
}

int	ft_hexa_up_put(unsigned int n)
{
	char	*base;
	int		count;

	base = "0123456789ABCDEF";
	count = 0;
	if (n >= 16)
		count = count + ft_hexa_up_put(n / 16);
	ft_putchar_fd(base[n % 16], 1);
	count++;
	return (count);
}

int	ft_put_pointer(unsigned long n)
{
	char	*base;
	int		count;

	base = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count = count + ft_put_pointer(n / 16);
	ft_putchar_fd(base[n % 16], 1);
	count++;
	return (count);
}
