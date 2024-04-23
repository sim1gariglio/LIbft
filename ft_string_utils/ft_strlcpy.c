/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:50:55 by sgarigli          #+#    #+#             */
/*   Updated: 2024/04/23 10:55:47 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_utils.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len_src;
	size_t	i;

	len_src = 0;
	while (src[len_src] != 0)
		len_src++;
	i = 0;
	if (size > 1)
	{
		while (src[i] != 0 && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	else if (size == 1)
		dest[i] = 0;
	return (len_src);
}
/*
int	main(void)
{
	char source[] = "";
	char dest[] = "ciao";
	char source2[] = "";
        char dest2[] = "ciao";

	printf("Size = %ld\nStringa = %s\n", ft_strlcpy(dest, source,7), dest);
	printf("Size = %ld\nStringa = %s\n", strlcpy(dest2, source2,7), dest2);
	return (0);
}*/
