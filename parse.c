/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <pmisztal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 13:00:35 by pmisztal          #+#    #+#             */
/*   Updated: 2026/11/09 13:11:17 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	detectsign(int i)
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
