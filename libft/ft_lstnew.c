/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <pmisztal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 10:11:41 by pmisztal          #+#    #+#             */
/*   Updated: 2026/11/04 10:36:39 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*node;

// 	node = ft_lstnew("Libft");

// 	printf("contenu de la node : %s\n", (char *)node->content);
// 	printf("next : %p\n", node->next);
// 	free(node);
// 	return (0);
// }
