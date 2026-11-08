/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <patrick.misztal@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 18:22:30 by pmisztal          #+#    #+#             */
/*   Updated: 2026/08/02 18:22:30 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || ((c >= 'a' && c <= 'z')
			|| (c >= 'A' && c <= 'Z')))
		return (1);
	return (0);
}

/*
#include <stdio.h>

int main(int ac, char **av)
{
	int res;

	(void)ac;
	res = ft_isalnum(av[1][0]);
	if (res == 1)
		printf("is alnum");
	else
		printf("is not alnum");
	return (0);
}
*/
