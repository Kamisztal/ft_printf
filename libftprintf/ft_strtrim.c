/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <pmisztal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 09:22:29 by pmisztal          #+#    #+#             */
/*   Updated: 2026/11/06 09:22:36 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		debut;
	int		len;
	int		fin;
	char	*str;

	len = ft_strlen(s1);
	debut = 0;
	while (s1[debut] != '\0' && ft_strchr(set, s1[debut]) != NULL)
		debut++;
	fin = len - 1;
	while (fin > debut && ft_strchr(set, s1[fin]) != NULL)
		fin--;
	str = malloc(sizeof(char) * (fin - debut + 2));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (debut <= fin)
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
