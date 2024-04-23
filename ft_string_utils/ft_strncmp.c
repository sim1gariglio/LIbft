/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:26:46 by sgarigli          #+#    #+#             */
/*   Updated: 2024/04/23 10:56:00 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_utils.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*news1;
	unsigned char	*news2;

	news1 = (unsigned char *)s1;
	news2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1)
	{
		if ((news1[i] != news2[i]) || news1[i] == 0 || news2[i] == 0)
			return (news1[i] - news2[i]);
		i++;
	}
	return (news1[i] - news2[i]);
}
/*
int	main(void)
{
	printf("Originale :%d\n", strncmp("test\2000", "test20", 6));
	printf("Copia :%d\n", ft_strncmp("test\200", "test20", 6));
	return (0);
	
}*/
