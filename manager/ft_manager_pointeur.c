/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manager_pointeur.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:57:52 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/06 20:48:12 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_send_pointer_in_printer(t_var var, char *strnbr)
{
	int count;

	count = 0;
	count += ft_putnstr("0x", 2);
	if (var.flag.point == 1)
		count += ft_width_manager(var.total_print, ft_strlen(strnbr), 1);
	count += ft_putnstr(strnbr, ft_strlen(strnbr));
	return (count);
}

int		ft_where_to_width_pointer(char *strnbr, t_var var, int count)
{
	if (var.flag.minus == 1)
		count += ft_send_pointer_in_printer(var, strnbr);
	if (var.total_print < ft_strlen(strnbr) && var.flag.point == 1)
		var.total_print = ft_strlen(strnbr);
	if (var.flag.point == 1)
	{
		var.total_width = var.total_width - var.total_print;
		count += ft_width_manager(var.total_width - 2, 0, 0);
	}
	else
		count += ft_width_manager(var.total_width - 2,
			ft_strlen(strnbr), var.flag.zero);
	if (var.flag.minus == 0)
		count += ft_send_pointer_in_printer(var, strnbr);
	return (count);
}

int		ft_pointer_manager(t_var var, unsigned long long nbr)
{
	int			count;
	char		*strnbr;

	count = 0;
	if (nbr == 0 && var.total_print == 0 && var.flag.point == 1)
	{
		count += ft_width_manager(var.total_width - 2, 0, 0);
		count += ft_putnstr("0x", 2);
		return (count);
	}
	strnbr = ft_hex_base(nbr);
	count = ft_where_to_width_pointer(strnbr, var, count);
	free(strnbr);
	return (count);
}