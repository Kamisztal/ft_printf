/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <patrick.misztal@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 18:22:42 by pmisztal          #+#    #+#             */
/*   Updated: 2026/08/02 18:22:42 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
#include <stdio.h>

int main(int ac, char **av)
{
	int res;

	(void)ac;
	res = ft_isascii(av[1][0]);
	if (res == 1)
		printf("is ascii");
	else
		printf("is not ascii");
	return (0);
}
*/
