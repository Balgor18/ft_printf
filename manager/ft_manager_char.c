/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manager_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 22:58:10 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/01 18:27:21 by fcatinau         ###   ########.fr       */
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
	i = 0;
	if ((var.total_print < var.total_width))
	{
		while (var.total_width != (i + size_type))
		{
			ft_putchar(print);
			i++;
		}
	}
	else
		while (var.total_print != (i + size_type))
		{
			ft_putchar(print);
			i++;
		}
	return (var);
}

void		ft_manager_char(char args, t_var var)
{
	if (var.flag.fl_less)
	{
		ft_putchar(args);
		if (var.total_width > 0)
			w_and_tp_char(var);
	}
	else
	{
		if (var.total_width > 0)
			w_and_tp_char(var);
		ft_putchar(args);
	}
}
