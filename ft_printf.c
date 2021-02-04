/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 10:24:32 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/03 22:04:21 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_parser(char *str, va_list ap)
{
	size_t	i;
	t_var	var;

	var.write_char = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			var = ft_verif_pourcent(str, ap, &i, var);
			if (var.error)
				return (0);
		}
		else
		{
			ft_putchar(str[i]);
			var.write_char++;
		}
		i++;
	}
	return (var.write_char);
}

int		ft_printf(const char *str, ...)
{
	va_list	args;
	int		nb_write;

	va_start(args, str);
	if (!(nb_write = ft_parser((char *)str, args)))
		return (nb_write);
	va_end(args);
	return (nb_write);
}
