/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 10:12:00 by sgarigli          #+#    #+#             */
/*   Updated: 2024/04/23 10:54:23 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*temp_dest;
	const char	*temp_src;
	size_t		i;

	temp_dest = (char *)dest;
	temp_src = (const char *)src;
	i = 0;
	if (temp_dest == temp_src)
		return (dest);
	if (temp_src < temp_dest)
	{
		i = n;
		while (i-- > 0)
			temp_dest[i] = temp_src[i];
	}
	else
	{
		while (i < n)
		{
			temp_dest[i] = temp_src[i];
			i++;
		}
	}
	return (dest);
}
/*
int main(void)
{
	char src[] = "123456789101121314, World!";
	char dest[30];

	ft_memmove(dest, src, (sizeof(src)));
	printf("Copia: %s\n", dest);
	char std_dest[30];
	memmove(std_dest, src, (sizeof(src)));
	printf("Originale: %s\n", std_dest);

	return (0);
}*/
