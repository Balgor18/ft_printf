/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manager.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 17:26:31 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/31 23:23:00 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** voir ce que je fais dedans
*/
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
	i = 0;
	if ((var.total_print < var.total_width))
		while (var.total_width != (i + size_type))
		{
			ft_putchar(zero_or_space(var));
			i++;
		}
	else
		while (var.total_print != (i + size_type))
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
		ft_putstr(args);
		if (var.total_width > 0)
			witdh_and_total_print(var, args);
	}
	else
	{
		if (var.total_width > 0)
			witdh_and_total_print(var, args);
		ft_putstr(args);
	}
}
