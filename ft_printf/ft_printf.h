/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:03:01 by sgarigli          #+#    #+#             */
/*   Updated: 2024/04/23 11:39:33 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
#include "../ft_conv/ft_conversion.h"
#include "../ft_string_utils/ft_string_utils.h"

int		ft_printf(const char *format, ...);
int		ft_printf_pointer(unsigned long int ptr);
int		ft_printf_hex(unsigned long num, const char i);

#endif
