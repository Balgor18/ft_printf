/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 10:24:32 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/26 16:16:18 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft(char *str)
{
	while(*str)
	{
		if (*str == '%')
		{
			ft_verif_flags(*str);
		}
		else
			ft_putchar(*str);
		str++;
	}
}

int		ft_printf(const char *str, va_list ap)
{
	va_list		arg;

	//ft_parser(str, '%');
	//va_start(arg, str);
	if
	//va_arg(arg);
	//va_end(arg);
}
