/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <pmisztal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 23:18:11 by pmisztal          #+#    #+#             */
/*   Updated: 2026/11/09 16:10:39 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

#include <stdio.h>
#include <stdarg.h>
#include "../libftprintf/libft.h"

int ft_printf(const char *, ...);
int	ft_detecttype(int i);
int	ft_print(va_list ap, const char *s);
int	ft_intput(va_list ap);
int	ft_apply(va_list ap, int i);
#endif
