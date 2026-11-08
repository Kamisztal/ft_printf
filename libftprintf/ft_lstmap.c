/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmisztal <patrick.misztal@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 16:05:16 by pmisztal          #+#    #+#             */
/*   Updated: 2026/10/26 16:05:16 by pmisztal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newnode;
	void	*newcontent;

	newlist = NULL;
	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	while (lst != NULL)
	{
		newcontent = f(lst->content);
		newnode = ft_lstnew(newcontent);
		if (newnode == NULL)
		{
			del(newcontent);
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, newnode);
		lst = lst->next;
	}
	return (newlist);
}
