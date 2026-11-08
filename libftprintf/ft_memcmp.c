/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <patrick.misztal@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 18:59:22 by pmisztal          #+#    #+#             */
/*   Updated: 2026/08/05 18:59:22 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1c;
	unsigned char	*s2c;

	i = 0;
	s1c = (unsigned char *)s1;
	s2c = (unsigned char *)s2;
	while (i < n)
	{
		if (s1c[i] == s2c[i])
			i++;
		else
			return (s1c[i] - s2c[i]);
	}
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
	char src[5] = "Hello";
	char dest[5] = "Helll";

	printf("%d\n", ft_memcmp(dest, src, 5));
	return (0);
}
*/
