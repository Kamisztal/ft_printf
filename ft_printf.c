/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <pmisztal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 23:18:21 by pmisztal          #+#    #+#             */
/*   Updated: 2026/11/09 13:25:44 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*print(va_list ap, char *s)
{
	int	i;
	int	option;

	i = 0;
	option = 0;
	while(s[i] != '\0')
	{
		if (s[i] == '%' && s[i + 1])
		{
			if (detectsign(s[i + 1]) != 0);
				option = 1;
			i++;
		}
		ft_putchar_fd(s, 1);
	}


}

int ft_printf(const char *s, ...)
{
	va_list	ap;
	int		retnb;

	va_start(ap, *s);
	retnb = 0;
	print(ap, *s);




}
