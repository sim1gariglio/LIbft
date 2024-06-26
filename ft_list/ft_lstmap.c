/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:08:40 by sgarigli          #+#    #+#             */
/*   Updated: 2024/04/23 10:50:44 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*startlst;

	if (!lst || !f || !del)
		return (NULL);
	newlst = ft_lstnew(f(lst->content));
	if (!newlst)
		return (NULL);
	startlst = newlst;
	lst = lst->next;
	while (lst != NULL)
	{
		newlst->next = ft_lstnew(f(lst->content));
		if (!newlst->next)
			return (NULL);
		newlst = newlst->next;
		lst = lst->next;
	}
	return (startlst);
}
