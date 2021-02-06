/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manager_type.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 22:32:15 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/06 19:21:46 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_width_manager(int width, int width_after, int flag_zero)
{
	int count;

	count = 0;
	while (width - width_after > 0)
	{
		if (flag_zero)
			ft_putchar('0');
		else
			(ft_putchar(' '));
		width--;
		count++;
	}
	return (count);
}

int		ft_char_manager(t_var var, char c)
{
	int count;

	count = 0;
	if (var.flag.minus == 1)
		count += ft_putchar(c);
	count += ft_width_manager(var.total_width, 1, var.flag.zero);
	if (var.flag.minus == 0)
		count += ft_putchar(c);
	return (count);
}

int		ft_type_manager(t_var var, char type, va_list args)
{
	int count;

	count = 0;
	if (type == 'c')
		count += ft_char_manager(var, va_arg(args, int));
	else if (type == 's')
		count += ft_string_manager(var, va_arg(args, char *));
	else if (type == 'p')
		count += ft_pointer_manager(var, va_arg(args, unsigned long long));
	else if (type == 'i' || type == 'd')
		count += ft_int_manager(var, va_arg(args, int));
	else if (type == 'u')
		count += ft_unsigned_manager(var, va_arg(args, unsigned int));
	else if (type == 'x')
		count += ft_hex_manager(var, va_arg(args, unsigned int), 0);
	else if (type == 'X')
		count += ft_hex_manager(var, va_arg(args, unsigned int), 1);
	else if (type == '%')
		count += ft_char_manager(var, '%');
	return (count);
}
