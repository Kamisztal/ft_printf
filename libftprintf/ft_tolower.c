/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <patrick.misztal@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 18:22:56 by pmisztal          #+#    #+#             */
/*   Updated: 2026/08/02 18:22:56 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
		return (c);
	}
	return (c);
}

/*
#include <stdio.h>

int main(int ac, char **av)
{
	int res;

	(void)ac;
	res = ft_tolower(av[1][0]);
	printf("%c\n", res);
	return (0);
}
*/
