/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manager_uns_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 15:31:21 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/07 02:55:16 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_send_uint_in_printer(t_var var, char *strnbr)
{
	int count;

	count = 0;
	if (var.flag.point == 1)
		count += ft_width_manager(var.total_width - 1,
		ft_strlen(strnbr) - 1, 0);
	count += ft_putnstr(strnbr, ft_strlen(strnbr));
	return (count);
}

int		ft_where_to_width_uint(char *strnbr, t_var var, int count)
{
	printf("var.total_width %d && var.flag.minus %d\n", var.total_width, var.flag.minus);
	if (var.flag.minus == 1)
		count += ft_send_uint_in_printer(var, strnbr);
	if (var.total_print < ft_strlen(strnbr) && var.flag.point == 1)
		var.total_print = ft_strlen(strnbr);
	if (var.flag.point == 1)
	{
		var.total_width = var.total_width - var.total_print;
		count += ft_width_manager(var.total_width, 0, 0);
	}
	else
		count += ft_width_manager(var.total_width, ft_strlen(strnbr), var.flag.zero);
	if (var.flag.minus == 0)
		count += ft_send_uint_in_printer(var, strnbr);
	return (count);
}

int		ft_unsigned_manager(t_var var, unsigned int nbr)
{
	int		count;
	char	*strnbr;

	count = 0;
	if (nbr == 0 && var.total_print == 0 && var.flag.point == 1)
	{
		count += ft_width_manager(var.total_width, 0, 0);
		return (count);
	}
	strnbr = ft_unsigned_itoa((unsigned long long)nbr);
	count = ft_where_to_width_uint(strnbr, var, count);
	free(strnbr);
	return (count);
}