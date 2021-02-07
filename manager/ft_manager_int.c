/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manager_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 22:20:29 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/07 00:39:50 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_send_in_printer(t_var var, char *strnbr, int nbr)
{
	int count;

	count = 0;
	if (var.flag.point == 1 && nbr < 0)
		ft_putchar('-');
	if (var.flag.point == 1)
		count += ft_width_manager(var.total_print - 1,
		ft_strlen(strnbr) - 1, 1);
	count += ft_putnstr(strnbr, ft_strlen(strnbr));
	return (count);
}

int		ft_where_to_width(char *strnbr, t_var var, int nbr, int count)
{
	if (var.flag.minus == 1)
		count += ft_send_in_printer(var, strnbr, nbr);
	if (var.total_print < ft_strlen(strnbr) && var.flag.point == 1)
		var.total_print = ft_strlen(strnbr);
	if (var.flag.point == 1)
	{
		var.total_width = var.total_width - var.total_print;
		count += ft_width_manager(var.total_width, 0, 0);
	}
	else if (var.flag.minus == 1 && var.flag.zero == 1)
		count += ft_width_manager(var.total_width, ft_strlen(strnbr), 0);
	else
		count += ft_width_manager(var.total_width, ft_strlen(strnbr), var.flag.zero);
	if (var.flag.minus == 0)
		count += ft_send_in_printer(var, strnbr, nbr);
	return (count);
}

int		ft_int_manager(t_var var,long int nbr)
{
	int		count;
	int		temp_nbr;
	char	*strnbr;

	temp_nbr = nbr;
	count = 0;
	if (nbr == 0 && var.total_print == 0 && var.flag.point == 1)
	{
		count += ft_width_manager(var.total_width, 0, 0);
		return (count);
	}
	if ((var.flag.point == 1 || var.flag.zero == 1) && nbr < 0)
	{
		if (var.flag.point == 0 && var.flag.zero == 1)
			ft_putnstr("-", 1);
		nbr = -nbr;
		var.flag.zero = 1;
		var.total_width -= 1;
		count++;
	}
	strnbr = ft_itoa(nbr);
	count = ft_where_to_width(strnbr, var, temp_nbr, count);
	free(strnbr);
	return (count);
}
