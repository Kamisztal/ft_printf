/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <patrick.misztal@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 18:22:59 by pmisztal          #+#    #+#             */
/*   Updated: 2026/08/02 18:22:59 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
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
	res = ft_toupper(av[1][0]);
	printf("%c\n", res);
	return (0);
}
*/
