/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 10:25:28 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/26 17:03:53 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "stdarg.h"
# include "unistd.h"

struct		s_flags
{
	/* data */
}			t_flags;

int		ft_printf(const char *str, va_list ap);
void	ft_putchar(char c);
#endif
