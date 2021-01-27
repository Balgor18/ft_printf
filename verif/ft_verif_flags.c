/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 16:16:52 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/28 00:16:38 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Actuellement pas bon je dois changer pour le cas plusieur flag
*/

t_var		ft_verif_pourcent(char *s)
{
	t_var	var;

	ft_init_struct(var);
	var = ft_check_flags(var, *s);
	ft_fill_struct(*s + 1, var);
	return (var);
}

t_var		ft_check_flags(t_var var, char *s)
{
	int tru;

	tru = 1;
	if (*s + 1 == '-')
		var.flag.fl_less = tru;
	if (*s + 1 == '0')
		var.flag.fl_zero = tru;
	if (*s + 1 == '.')
		var.flag.fl_point = tru;
	if (*s + 1 == '%')
		var.flag.fl_per = tru;
	return (var);
}