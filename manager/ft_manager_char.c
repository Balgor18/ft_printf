/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manager_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 22:58:10 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/03 19:06:24 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_var		w_and_tp_char(t_var var)
{
	int		i;
	char	print;
	int		size_type;

	size_type = 1;
	print = ' ';
	if (var.flag.fl_zero)
		print = '0';
	i = -1;
	while (var.total_width > (++i + size_type))
		ft_putchar(print);
	var.write_char = var.write_char + i;
	return (var);
}

t_var		ft_manager_char(char args, t_var var)
{
	
	if (var.total_print > 0)
		var.total_print = -1;
	if (var.flag.fl_less)
	{
		ft_putchar(args);
		if (var.total_width > 0)
			var = w_and_tp_char(var);
	}
	else
	{
		if (var.total_width > 0)
			var = w_and_tp_char(var);
		ft_putchar(args);
	}
	var.write_char = var.write_char + 1;
	//printf("apres manager char var.write_char %d \n",var.write_char);
	return (var);
}
