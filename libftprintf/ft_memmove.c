/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <patrick.misztal@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 18:46:59 by pmisztal          #+#    #+#             */
/*   Updated: 2026/08/05 18:46:59 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n )
{
	size_t				i;
	unsigned char		*dst;
	const unsigned char	*sr;

	dst = (unsigned char *)dest;
	sr = (unsigned char *)src;
	i = 0;
	if (dst > sr)
	{
		i = n;
		while (i > 0)
		{
			i--;
			dst[i] = sr[i];
		}
	}
	else
	{
		while (i < n)
		{
			dst[i] = sr[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
	char src[10] = "BBBBBBBBBB";
	char dest[11] = "AAAAAAAAAAA";

	ft_memmove(dest, src, 11);
	printf("%s\n", dest);
	return (0);
}
*/
