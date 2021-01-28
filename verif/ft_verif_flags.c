/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 16:16:52 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/29 00:35:14 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_verif_pourcent(char *s, va_list ap)
{
	t_var	var;

	(void)ap; // voir pous la use plus tard
	var = ft_init_struct();
	var = ft_check_flags(var, s);
	var = ft_fill_struct(s, var);
	if (var.ERROR)
		return (0);
	ft_check_type(var);
	return (1);
}

t_var		ft_check_flags(t_var var, char *s) // si un flag est passe increase +1
{
	if (*s == '-')
	{
		var.flag.fl_less = 1;
		s++;
	}
	if (*s == '0')
	{
		var.flag.fl_zero = 1;
		s++;
	}
	if (*s == '.')
	{
		var.flag.fl_point = 1;
		s++;
	}
	if (*s == '*')
	{
		var.flag.fl_star = 1;
		s++;
	}
	return (var);
}
