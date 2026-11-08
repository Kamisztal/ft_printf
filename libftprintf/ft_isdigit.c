/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <patrick.misztal@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 18:22:47 by pmisztal          #+#    #+#             */
/*   Updated: 2026/08/02 18:22:47 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*
#include <stdio.h>

int main(int ac, char **av)
{
	int res;

	(void)ac;
	res = ft_isdigit(av[1][0]);
	if (res == 1)
		printf("is digit");
	else
		printf("is not digit");
	return (0);
}
*/
