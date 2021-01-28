/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 16:16:52 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/28 23:45:50 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_var		ft_verif_pourcent(char *s, va_list ap)
{
	t_var	var;

	(void)ap; // voir pous la use plus tard
	var = ft_init_struct(var);
	var = ft_check_flags(var, s);
	ft_fill_struct(s + 1, var);
	if (var.ERROR)
		return (var);
	ft_check_type(var);
	return (var);
}

t_var		ft_check_flags(t_var var, char *s)
{
	if (*s + 1 == '-')
		var.flag.fl_less = 1;
	if (*s + 1 == '0')
		var.flag.fl_zero = 1;
	if (*s + 1 == '.')
		var.flag.fl_point = 1;
	if (*s + 1 == '*')
		var.flag.fl_star = 1;
	return (var);
}
