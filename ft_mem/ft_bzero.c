/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:02:59 by sgarigli          #+#    #+#             */
/*   Updated: 2024/04/23 10:51:07 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		((char *)(s))[i] = 0;
		i++;
		n--;
	}
}
/*
int     main(void)
{       
        char s1[] = "ciaoasda";
        char s2[] = "ciaoasda";
        int	n;
	int	i;

	n = 10;
	i = 0;
	ft_bzero(s1, n);
        bzero(s2, n);
	printf("Copia : ");
	while (i < 11)
	{	
        	printf("%c", s1[i]);
		i++;
	}
	printf("\n");
	i = 0;
	printf("Originale : ");
	while (i < 11)
	{
        	printf("%c",s2[i]);
		i++;
	}
	printf("\n");

	return (0);
}*/
