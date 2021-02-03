/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manager_hexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 11:25:27 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/03 12:28:39 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_manager_hexa(char *str, t_var var)
{
	if (var.total_print > 0 && var.flag.fl_less)
	{
		var.total_print = -1;
		var.flag.fl_less = 0;
	}
	if (var.flag.fl_less)
	{
		ft_putstrint(str, var);
		if (var.total_width > 0)
			print_widthint(var, str);
	}
	else
	{
		if (var.total_width > 0)
			print_widthint(var, str);
		ft_putstrint(str, var);
	}
}