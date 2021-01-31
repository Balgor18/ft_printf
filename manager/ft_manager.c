/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manager.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 17:26:31 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/01 00:23:15 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** voir ce que je fais dedans
*/
size_t		diff_tp_real_size(char *s, t_var var)
{
	int len;

	len = (size_t)ft_strlen(s);
	if ((ft_strlen(s) - (int)var.total_print) < 0)
		return (0);
	return ((size_t)ft_strlen(s) - var.total_print);
}

size_t		ft_size_by_type(char* args)// fais que 3 type voir pour les autres
{
	size_t i;

	i = (size_t)ft_strlen(args);
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
	size_t	i;
	size_t	size_type;

	size_type = ft_size_by_type(args);
	if (var.total_print > 0)
		var.total_width = var.total_width + diff_tp_real_size(args, var);
	i = 0;
	while (var.total_width > (i + size_type))
	{
		ft_putchar(zero_or_space(var));
		i++;
	}
	return (var);
}

void		ft_manager(char *args, t_var var)
{
	if (var.flag.fl_less)
	{
			ft_putstr(args, var);
		if (var.total_width > 0)
			witdh_and_total_print(var, args);
	}
	else
	{
		if (var.total_width > 0)
			witdh_and_total_print(var, args);
		ft_putstr(args, var);
	}
}