/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manager_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 22:20:29 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/02 21:29:58 by fcatinau         ###   ########.fr       */
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

void		print_widthint(t_var var, char *str)
{
	int i;

	i = -1;
	if (var.total_width < (++i + ft_strlen(str)) || is_sup_str(var, str))
		while(var.total_width >= (++i + ft_strlen(str) + diff_tp(var, str)))
			ft_putchar(zero_or_space(var));
	else
		while(var.total_width >= (++i + ft_strlen(str)))
			ft_putchar(zero_or_space(var));
}
void	ft_putstrint(char *str, t_var var)
{
	int i;

	i= -1;
	while(var.total_print > (++i + ft_strlen(str)))
		ft_putchar('0');
	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

void		ft_manager_int(char *str, t_var var)
{
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
