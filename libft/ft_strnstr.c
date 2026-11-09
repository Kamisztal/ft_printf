/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <pmisztal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 10:12:45 by pmisztal          #+#    #+#             */
/*   Updated: 2026/11/04 10:12:46 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	pos;

	i = 0;
	j = 0;
	if (needle[i] == '\0')
		return ((char *)hay);
	while (i < len && hay[i] != '\0')
	{
		pos = i;
		j = 0;
		while (i < len && hay[i] == needle[j] && needle[j] != '\0')
		{
			i++;
			j++;
		}
		if (j == ft_strlen(needle))
			return ((char *)&hay[pos]);
		i = pos + 1;
	}
	return (NULL);
}

// #include <stdio.h>

// int main(void)
// {
// 	char src[13] = "HelloHowAreU";
// 	char dest[4] = "Are";

// 	printf("%s\n", ft_strnstr(src, dest, 13));
// 	return (0);
// }
