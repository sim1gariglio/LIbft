/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:43:07 by sgarigli          #+#    #+#             */
/*   Updated: 2024/04/23 10:55:35 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_utils.h"

char	*ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*news;

	len = 0;
	i = 0;
	while (s[len])
		len++;
	news = (char *) malloc((len + 1) * sizeof (char));
	if (!(news))
		return (NULL);
	while (s[i])
	{
		news[i] = s[i];
		i++;
	}
	news[i] = 0;
	return (news);
}
/*
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (-1);
	printf("%s\n", ft_strdup(argv[1]));
	printf("%s\n",strdup(argv[1]));
	return (0);
}*/
