/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <patrick.misztal@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 22:56:31 by pmisztal          #+#    #+#             */
/*   Updated: 2026/08/25 22:56:31 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, count * size);
	return (ptr);
}
/*
#include <stdio.h>

int main(void)
{
	int *tab;

	tab = ft_calloc(4, sizeof(int));
	printf("%d %d %d %d\n", tab[0], tab[1], tab[2], tab[3]);
	free(tab);
	return (0);
}
*/
