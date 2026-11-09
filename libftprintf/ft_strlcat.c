/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <pmisztal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 10:12:34 by pmisztal          #+#    #+#             */
/*   Updated: 2026/11/05 13:41:10 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	res;

	i = 0;
	j = 0;
	while (j < dstsize && dst[j] != '\0')
		j++;
	if (dstsize <= j)
		return (dstsize + ft_strlen(src));
	res = (ft_strlen(src) + j);
	while (src[i] != '\0' && j < dstsize - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (res);
}

// #include <stdio.h>

// int main(void)
// {
// 	char src[8] = "HowAreU";
// 	char dest[6] = "Hello";

// 	printf("%ld\n", ft_strlcat(dest, src, 5));
// 	return (0);
// }
