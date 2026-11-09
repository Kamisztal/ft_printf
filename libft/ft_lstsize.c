/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <pmisztal@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 10:11:43 by pmisztal          #+#    #+#             */
/*   Updated: 2026/11/04 10:52:09 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*list;

// 	list = ft_lstnew("PavierPiel");
// 	ft_lstadd_back(&list, ft_lstnew("est cool"));
// 	printf("contient : %d", ft_lstsize(list));
// 	free(list);
// 	return (0);
// }
