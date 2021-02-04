/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manager_pointeur.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:57:52 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/04 16:18:17 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_var		ft_manager_pointeur(char *str, t_var var)
{
		if (var.total_print > 0 && var.flag.fl_less)
	{
		var.total_print = -1;
		var.flag.fl_less = 0;
	}
	if (var.flag.fl_less)
	{
		var = ft_putstrint(str, var);
		if (var.total_width > 0)
			var = print_widthint(var, str, 0);
	}
	else
	{
		if (var.total_width > 0)
			var = print_widthint(var, str, 0);
		var = ft_putstrint(str, var);
	}
	return (var);
}