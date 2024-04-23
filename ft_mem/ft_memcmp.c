/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:55:51 by sgarigli          #+#    #+#             */
/*   Updated: 2024/04/23 10:54:18 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*news1;
	const unsigned char	*news2;
	size_t				i;

	i = 0;
	news1 = (const unsigned char *)s1;
	news2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (news1[i] != news2[i])
			return (news1[i] - news2[i]);
		i++;
	}
	return (0);
}
