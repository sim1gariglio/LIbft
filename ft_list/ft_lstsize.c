/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:20:39 by sgarigli          #+#    #+#             */
/*   Updated: 2024/04/23 10:50:49 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_lstsize(t_list *list)
{
	int		size;
	t_list	*temp;

	if (list == NULL)
		return (0);
	size = 0;
	temp = list;
	while (temp->next != NULL)
	{
		temp = temp->next;
		size++;
	}
	size++;
	return (size);
}
