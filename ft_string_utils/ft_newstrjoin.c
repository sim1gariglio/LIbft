/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newstrjoin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:41:09 by sgarigli          #+#    #+#             */
/*   Updated: 2024/04/23 11:41:14 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_utils.h"

char	*ft_newstrjoin(char *dump, char *buff)
{
	char	*res;
	size_t	i;
	size_t	j;

	if (!buff)
		return (NULL);
	if (!dump)
		dump = ft_calloc(1, sizeof(char));
	if (!dump)
		return (NULL);
	res = ft_calloc((ft_strlen(dump) + ft_strlen(buff) + 1), sizeof(char));
	if (!res)
		return (NULL);
	i = -1;
	j = 0;
	if (dump)
		while (dump[++i] != '\0')
			res[i] = dump[i];
	while (buff[j] != '\0')
		res[i++] = buff[j++];
	res[ft_strlen(dump) + ft_strlen(buff)] = '\0';
	free(dump);
	return (res);
}