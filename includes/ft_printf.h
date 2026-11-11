/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <pmisztal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 23:18:11 by pmisztal          #+#    #+#             */
/*   Updated: 2026/11/09 18:06:19 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_F
# define FT_PRINT_F
#include <stdio.h>
#include <stdarg.h>
#include "../libft/libft.h"

//Printf
int		ft_printf(const char *, ...);
int		ft_print(va_list ap, const char *s);

//Apply
int		ft_apply_basic(va_list ap, int type);
int		ft_apply_else(va_list ap, int type);
int		ft_apply_hexa(va_list ap, int type);
int		ft_detecttype(int i);

//Put
int		ft_intput(va_list ap);
int		ft_charput(va_list ap);
int		ft_stringput(va_list ap);
int		ft_unsignedput(unsigned int n);
int		ft_hexa_low_put(unsigned int n);
int		ft_hexa_up_put(unsigned int n);

#endif
