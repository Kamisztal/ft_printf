/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <patrick.misztal@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 10:32:24 by pmisztal          #+#    #+#             */
/*   Updated: 2026/09/22 10:32:24 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		debut;
	int		len;
	char	*str;

	len = ft_strlen(s1);
	i = 0;
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != NULL)
		i++;
	debut = i;
	while (len - 1 > debut && ft_strchr(set, s1[len]) != NULL)
		len--;
	i = 0;
	while (debut <= len)
	{
		str[i] = s1[debut];
		i++;
		debut++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
	char *set;
	char *str;

	set = "x";
	str = "xxHelxloxx";
	printf("%s", ft_strtrim(str, set));
	return (0);
}
*/
