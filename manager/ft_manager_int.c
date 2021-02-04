/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manager_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 22:20:29 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/04 19:38:28 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			diff_tp(t_var var, char *str)
{
	int i;

	i = 0;
	if (var.total_print < ft_strlen(str))
		return (i);
	i = var.total_print - ft_strlen(str);
	if (i < 0)
		i = i * -1;
	return (i);
}

int			is_sup_str(t_var var, char *str)
{
	int i;

	i = ft_strlen(str);
	if (i < var.total_print)
		return (1);
	return (0);
}

t_var		print_widthint(t_var var, char *str, int nbr)
{
	int i;

	i = -1;
	if (nbr < 0 && var.flag.fl_zero)
	{
		ft_putchar(str[0]);
		var.write_char++;
		var.already_print = 1;
	}
	if (var.total_width < (i + ft_strlen(str)) || is_sup_str(var, str))
		while(var.total_width >= (++i + ft_strlen(str) + diff_tp(var, str)))
			ft_putchar(zero_or_space(var));
	else
		while(var.total_width > (++i + ft_strlen(str)))
			ft_putchar(zero_or_space(var));
	var.write_char = var.write_char + i;
	return (var);
}

t_var		ft_manager_int(char *str, t_var var)
{
	int i;

	i = ft_atoi(str);
	if (var.total_width > 0 && var.flag.fl_less == 1)
		var.flag.fl_zero = 0;
	if (i == 0 && var.total_print == 0 && var.flag.fl_point == 1)
	{
		var.write_char += ft_width_manager(var.total_width, 0, 0);
		return (var);
	}
	else if (var.flag.fl_less)
	{
		printf("\nje print \n");
		var = ft_putstrint(str, var);
		printf("\nfin print \n");
		if (var.total_width > 0)
			var = print_widthint(var, str, i);
	}
	else
	{
		if (var.total_width > 0)
			var = print_widthint(var, str, i);
		var = ft_putstrint(str, var);
	}
	free(str);
	return (var);
}
