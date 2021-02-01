/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 09:34:45 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/01 21:44:32 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_var		flag_less(t_var var, va_list args, char type)
{
	int i;

	i = va_arg(args, int);
	if (i < 0)
	{
		var.flag.fl_less = 1;
		i = i * -1;
	}
	if (type == 'w')
		var.total_width = i;
	else if (type == 'p')
		var.total_print = i;
	return (var);
}

t_var		flag_star(t_var var, va_list args, char *s, size_t *pos)
{
	var.flag.fl_star = 1;
	var = flag_less(var, args, 'w');
	*pos = *pos + 1;
	if (s[*pos] == '.')
	{
		*pos = *pos + 1;
		if (s[*pos] == '*')
		{
			var = flag_less(var, args, 'p');
			*pos = *pos + 1;
		}
		else
		{
			var = ft_fill_tp(s, var, pos, args);
		}
	}
	return (var);
}
