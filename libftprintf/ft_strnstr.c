/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <patrick.misztal@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 17:38:34 by pmisztal          #+#    #+#             */
/*   Updated: 2026/08/13 17:38:34 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	pos;

	i = 0;
	j = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		pos = i;
		j = 0;
		while (haystack[i] == needle[j] && needle[j] != '\0'
			&& i < len)
		{
			i++;
			j++;
		}
		if (j == ft_strlen(needle))
			return ((char *)&haystack[pos]);
		i = pos + 1;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main(void)
{
	char src[13] = "HelloHowAreU";
	char dest[4] = "Are";

	printf("%s\n", ft_strnstr(src, dest, 13));
	return (0);
}
*/
