/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 10:24:32 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/28 17:10:48 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_parser(char *str, va_list ap)
{
	t_var var;

	while (*str)
	{
		if (*str == '%')
		{
			var = ft_verif_pourcent(*str, ap);
			if (var.ERROR)
				return (0);
		}
		else
			ft_putchar(*str);
		str++;
	}
}

int		ft_printf(const char *str, va_list ap)
{
	if (!ft_parser(str, ap))
		return (-1);
	return (0);
}

