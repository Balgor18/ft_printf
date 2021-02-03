/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manager.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 17:26:31 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/03 18:25:48 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t		diff_tp_real_size(char *s, t_var var)
{
	size_t len;

	len = ft_strlen(s);
	if ((ft_strlen(s) - (int)var.total_print) < 0)
		return (0);
	return ((size_t)ft_strlen(s) - var.total_print);
}

int		ft_size_by_type(char* args)
{
	int i;

	i = ft_strlen(args);
	return (i);
}

char		zero_or_space(t_var var)
{
	if (var.flag.fl_zero)
		return ('0');
	return (' ');
}

t_var		witdh_and_total_print(t_var var, char* args)
{
	int		i;
	int		size_type;

	i = 0;
	size_type = ft_size_by_type(args);
	if (var.total_print >= 0)
		var.total_width = var.total_width + diff_tp_real_size(args, var);
	while (var.total_width > (i + size_type) )
	{
		ft_putchar(zero_or_space(var));
		i++;
	}
	var.write_char = var.write_char + i;
	return (var);
}

t_var		ft_manager(char *args, t_var var)
{
	if (var.flag.fl_less)
	{
		var = ft_putstr(args, var);
		if (var.total_width > 0)
			var = witdh_and_total_print(var, args);
	}
	else
	{
		if (var.total_width > 0)
			var = witdh_and_total_print(var, args);
		var = ft_putstr(args, var);
	}
	return (var);
}
