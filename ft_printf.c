/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 10:24:32 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/29 21:57:39 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_parser(char *str, va_list ap)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			if (!ft_verif_pourcent(str, ap, &i))
				return (0);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	return (1);
}

int		ft_printf(const char *str, ...)
{
	va_list args;

	va_start(args, str);
	if (!ft_parser((char *)str, args))
		return (-1);
	return (0);
}
