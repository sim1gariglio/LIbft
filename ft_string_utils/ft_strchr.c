/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:13:50 by sgarigli          #+#    #+#             */
/*   Updated: 2024/04/23 10:55:31 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_utils.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != (unsigned char)c)
	{
		if (*str == 0)
			return (NULL);
		str++;
	}
	return (str);
}
/*
int	main(void)
{
	char	*result = ft_strchr("tripouille", 't' + 256);
	if (result != NULL)
		printf("%s\n", result);
	if (result == NULL)
                printf("(null)");
	return (0);
}*/
