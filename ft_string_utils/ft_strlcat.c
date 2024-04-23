/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:14:12 by sgarigli          #+#    #+#             */
/*   Updated: 2024/04/23 10:55:45 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_utils.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_src;
	size_t	len_dest;
	size_t	i;

	i = 0;
	len_src = 0;
	len_dest = 0;
	while (dest[len_dest] != 0)
		len_dest++;
	while (src[len_src] != 0)
		len_src++;
	if (size < len_dest)
		return (size + len_src);
	while (src[i] && size > 0 && len_dest < size - 1)
		dest[len_dest++] = src [i++];
	dest[len_dest] = 0;
	while (src[i])
	{
		i++;
		len_dest++;
	}
	return (len_dest);
}
/*
int     main(void)
{
        char source[] = "ciao";
        char dest[] = "prova";
        //char source2[] = "ciao";
        //char dest2[] = "prova";

       	printf("Size = %ld Stringa = %s\n", ft_strlcat(dest, source,8), dest);
        //printf("Size = %ld Stringa = %s\n", strlcat(dest2, source2,8), dest2);
        return (0);
}*/
