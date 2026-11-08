/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <patrick.misztal@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 17:01:43 by pmisztal          #+#    #+#             */
/*   Updated: 2026/09/24 17:01:43 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcount(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (count);
}

static void	free_split(char **str, int j)
{
	while (j > 0)
		free(str[--j]);
	free(str);
}

static char	**fill_split(char **str, char const *s, char c)
{
	int	i;
	int	j;
	int	debut;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		debut = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		str[j] = ft_substr(s, debut, i - debut);
		if (!str[j])
		{
			free_split(str, j);
			return (NULL);
		}
		j++;
	}
	str[j] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	str = malloc(sizeof(char *) * (wordcount((char *)s, c) + 1));
	if (!str)
		return (NULL);
	return (fill_split(str, s, c));
}
/*
#include <stdio.h>

int main(void)
{
	char	**str;
	int i;

	i = 0;
	str = ft_split("Coucou les gens wwefw", ' ');
	while (str[i] != NULL)
	{
		printf("%s\n", str[i]);
		free(str[i]);
		i++;
	}
	free(str);
	return 0;
}
*/
