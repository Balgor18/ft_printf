/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_manager.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 18:48:25 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/13 14:55:03 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_flag_point(const char *c, va_list args, t_var *var, int i)
{
	i++;
	if (c[i] == '*')
	{
		(*var).flag.point = 1;
		(*var).total_print = va_arg(args, int);
		i++;
	}
	else
	{
		(*var).flag.point = 1;
		while (isdigit(c[i]))
			(*var).total_print = ((*var).total_print * 10)
				+ (c[i++] - '0');
	}
	if ((*var).total_print < 0)
		(*var).flag.point = 0;
	return (i);
}

t_var	ft_flag_star(t_var var, va_list args)
{
	var.flag.star = 1;
	var.total_width = va_arg(args, int);
	if (var.total_width < 0)
	{
		var.flag.minus = 1;
		var.total_width *= -1;
	}
	return (var);
}

t_var	ft_flag_isdigit(t_var var, char digit)
{
	if (var.flag.star >= 1)
		var.total_print = (var.total_print * 10) + (digit - '0');
	else if (var.flag.star == 0)
		var.total_width = (var.total_width * 10) + (digit - '0');
	return (var);
}
