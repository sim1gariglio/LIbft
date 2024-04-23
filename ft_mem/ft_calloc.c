/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:52:38 by sgarigli          #+#    #+#             */
/*   Updated: 2024/04/23 10:51:12 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb > 0 && (size > 2147483647 / nmemb))
		return (NULL);
	ptr = malloc(size * nmemb);
	if (!(ptr))
		return (NULL);
	ft_memset (ptr, 0, size * nmemb);
	return (ptr);
}
