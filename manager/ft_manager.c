/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manager.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 17:26:31 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/06 20:55:05 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_point_check(char *str, t_var var, int len)
{
	int count;

	count = 0;
	if (var.flag.point == 1)
	{
		count += ft_width_manager(var.total_print, len, var.flag.zero);
		count += ft_putnstr(str, var.total_print);
	}
	else
		count += ft_putnstr(str, len);
	return (count);
}

int		ft_string_manager(t_var var, char *str)
{
	int count;
	int len;

	if (str == NULL)
		str = "(null)";
	len = ft_strlen(str);
	count = 0;
	if (var.flag.point > 0 && var.total_print > len)
		var.total_print = len;
	if (var.flag.minus == 1)
		count += ft_point_check(str, var, len);
	if (var.flag.point == 1)
		count += ft_width_manager(var.total_width, var.total_print
			, var.flag.zero);
	else
		count += ft_width_manager(var.total_width, ft_strlen(str)
			, var.flag.zero);
	if (var.flag.minus == 0)
		count += ft_point_check(str, var, len);
	return (count);
}