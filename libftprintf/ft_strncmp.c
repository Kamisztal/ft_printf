/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <patrick.misztal@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 18:38:52 by pmisztal          #+#    #+#             */
/*   Updated: 2026/08/12 18:38:52 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
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
		{
			if (s1c[i] == '\0')
				return (0);
			i++;
		}
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

	printf("%d\n", ft_strncmp(dest, src, 5));
	return (0);
}
*/
