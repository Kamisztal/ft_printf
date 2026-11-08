/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <patrick.misztal@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 14:10:56 by pmisztal          #+#    #+#             */
/*   Updated: 2026/09/16 14:10:56 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		i;

	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	if (start > ft_strlen(s))
	{
		str[i] = '\0';
		return (str);
	}
	while (s[start] != '\0' && i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
int main(void)
{
	char *str;

	str = "hello abc";
	printf("%s",ft_substr(str, 6, 143));
	return (0);
}
*/
