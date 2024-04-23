/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:12:58 by sgarigli          #+#    #+#             */
/*   Updated: 2024/04/23 10:55:42 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_utils.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;
	size_t	j;
	char	*s3;

	i = 0;
	j = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	s3 = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!s3)
		return (NULL);
	while (i < len_s1)
	{
		s3[i] = s1[i];
		i++;
	}
	while (j < len_s2)
	{
		s3[i + j] = s2[j];
		j++;
	}
	s3[i + j] = 0;
	return (s3);
}
/*
int	main(int argc, char *argv[])
{
	if (argc!= 3)
		return (-1);
	printf("%s\n", ft_strjoin(argv[1], argv[2]));	
	return (0);
}*/
