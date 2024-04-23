/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:17:54 by sgarigli          #+#    #+#             */
/*   Updated: 2024/04/23 10:54:26 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		((char *)(s))[i] = c;
		i++;
		n--;
	}
	return (s);
}
/*
int	main(void)
{
	char s1[20];
	char s2[20];
	ft_memset(s1, 49, 5);
	memset(s2, 49, 5);
	printf("Copia: %s\n", s1);
	printf("Originale: %s\n",s2);
	return (0);
}*/
