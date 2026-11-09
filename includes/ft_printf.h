/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <pmisztal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 23:18:11 by pmisztal          #+#    #+#             */
/*   Updated: 2026/11/09 15:06:47 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

#include <stdio.h>
#include <stdarg.h>
#include "../libftprintf/libft.h"

int ft_printf(const char *, ...);
int	ft_detectsign(int i);
int	ft_print(va_list ap, const char *s);

#endif
