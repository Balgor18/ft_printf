/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 10:24:32 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/28 11:27:20 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_parser(char *str)
{
	t_var var;

	while (*str)
	{
		if (*str == '%')
			var = ft_verif_pourcent(*str);
		else
			ft_putchar(*str);
		str++;
	}
}

/*
** int		ft_printf(const char *str, va_list ap)
** {
** 	va_list		arg;
**
** 	//ft_parser(str, '%');
** 	//va_start(arg, str);
** 	if
** 	//va_arg(arg);
** 	//va_end(arg);
** }
*/
