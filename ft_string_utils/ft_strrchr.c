/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:14:03 by sgarigli          #+#    #+#             */
/*   Updated: 2024/04/23 10:56:05 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_utils.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	if ((unsigned char)c == 0)
		return ((char *)(&(s[len])));
	while (len >= 0)
	{
		if (s[len] == (unsigned char) c)
			return ((char *)(&(s[len])));
		len--;
	}
	return (NULL);
}
/*
int     main(int argc, char **argv)
{
        if (argc != 3)
                return (-1);
        char    *result = ft_strrchr(argv[1], *argv[2]);
        if (result != NULL)
                printf("%s\n", result);
        if (result == NULL)
                printf("(null)");
        return (0);
}*/
