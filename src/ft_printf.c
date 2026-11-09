/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <pmisztal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 23:18:21 by pmisztal          #+#    #+#             */
/*   Updated: 2026/11/09 17:30:22 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print(va_list ap, const char *s)
{
	int	i;
	int	sizeall;
	int	option;

	i = 0;
	option = 0;
	sizeall = 0;
	while(s[i] != '\0')
	{
		if (s[i] == '%' && s[i + 1])
			option = ft_detecttype(s[i + 1]);
		if (option <= 9 && option >= 1)
		{
			sizeall += ft_apply(ap, option);
			i += 2;
		}
		else
		{
			ft_putchar_fd(s[i], 1);
			i++;
			sizeall++;
		}
	}
	return (sizeall);
}

int ft_printf(const char *s, ...)
{
	va_list	ap;
	int		retnb;

	va_start(ap, s);
	retnb = 0;
	va_end(ap);
	retnb = ft_print(ap, s);
	return (retnb);
}
