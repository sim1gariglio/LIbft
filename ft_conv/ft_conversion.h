/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:25:27 by sgarigli          #+#    #+#             */
/*   Updated: 2024/04/23 11:38:31 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONVERSION_H
# define FT_CONVERSION_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stddef.h>

int		ft_atoi(const char *nptr);
char	*ft_itoa(int n);
char	*ft_uitoa(unsigned int n);

#endif