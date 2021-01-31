/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manager.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 17:26:31 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/31 17:54:40 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** voir ce que je fais dedans
*/
size_t		ft_size_by_type(t_var var, va_list args)// fais que 3 type voir pour les autres
{
	size_t i;

	i = 0;
	if (var.type == 'c' || var.type == '%')
		i = 1;
	else if (var.type == 's')
		i = (size_t)ft_strlen(va_arg(args, char*));
	else if (var.type == 'd')
		i = ft_strlen(ft_itoa(va_arg(args, int)));
	return (i);
}

t_var		witdh_and_total_print(t_var var, va_list args)
{
	size_t	i;
	char	print;
	size_t	size_type;

	size_type = ft_size_by_type(var, args);
	print = ' ';
	if (var.flag.fl_zero)
		print = '0';
	i = 0;
	if (!(var.total_print > var.total_width))
		while (var.total_width != (i + size_type))
		{
			ft_putchar(print);
			i++;
		}
	else
		while (var.total_print != (i + size_type))
		{
			ft_putchar(print);
			i++;
		}
	return (var);
}

void		ft_manager(va_list args, t_var var)
{
	//faire le cas du flag '-'
	(void)args;
	if (var.flag.fl_less)
	{
		ft_check_type(var, args);
		witdh_and_total_print(var, args);
	}
	else
	{
		witdh_and_total_print(var, args);
		ft_check_type(var, args);
	}
}
