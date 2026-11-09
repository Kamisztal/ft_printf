/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <pmisztal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 10:11:48 by pmisztal          #+#    #+#             */
/*   Updated: 2026/11/04 10:11:49 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dest, const void	*src, size_t count)
{
	size_t				i;
	unsigned char		*dst;
	const unsigned char	*sr;

	dst = (unsigned char *)dest;
	sr = (unsigned char *)src;
	i = 0;
	while (i < count)
	{
		dst[i] = sr[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>

int main(void)
{
	char src[7] = "Hellooo";
	char dest[8] = "nothing";

	ft_memcpy(dest, src, 9);
	printf("%s\n", dest);
	return (0);
}
*/
