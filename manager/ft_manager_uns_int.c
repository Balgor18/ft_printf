/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manager_uns_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 15:31:21 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/03 17:53:27 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_var		ft_manager_uns_int(char *str,t_var var)
{
	var.write_char = var.write_char + ft_strlen(str);
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
	free(str);
	return (var);
}