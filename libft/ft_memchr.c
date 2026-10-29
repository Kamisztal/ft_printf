/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <patrick.misztal@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 14:04:18 by pmisztal          #+#    #+#             */
/*   Updated: 2026/08/04 14:04:18 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>

int main(void)
{
	char buffer[10] = "XavierNiel";
	char *res;

	res = ft_memchr(buffer, 'N', 10);
	if (res != NULL)
		printf("%ld\n", res - buffer);
	return (0);
}
*/
