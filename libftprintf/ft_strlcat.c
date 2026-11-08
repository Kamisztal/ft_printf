/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <patrick.misztal@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 01:34:48 by pmisztal          #+#    #+#             */
/*   Updated: 2026/08/13 01:34:48 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	res;

	i = 0;
	j = ft_strlen(dst);
	res = (ft_strlen(src) + j);
	if (dstsize == 0)
		return (res);
	while (src[i] != '\0' && j < dstsize - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (res);
}
/*
#include <stdio.h>

int main(void)
{
	char src[8] = "HowAreU";
	char dest[6] = "Hello";

	printf("%ld\n", ft_strlcat(dest, src, 6));
	return (0);
}
*/
