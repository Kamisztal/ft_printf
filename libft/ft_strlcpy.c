/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <patrick.misztal@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 00:47:22 by pmisztal          #+#    #+#             */
/*   Updated: 2026/08/13 00:47:22 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	res;
	size_t	i;

	i = 0;
	res = ft_strlen(src);
	if (dstsize == 0)
		return (res);
	while (i < dstsize - 1)
	{
		if (src[i] == '\0')
			break ;
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (res);
}
/*
#include <stdio.h>

int main(void)
{
	char src[6] = "Helli";
	char dest[6] = "Hello";

	printf("%ld\n", ft_strlcpy(dest, src, 5));
	return (0);
}
*/
