/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 09:34:45 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/30 10:07:23 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_var	flag_star(t_var var, va_list args, char *s, size_t *pos) // faire un test quand c'est le flag star
{
	var.flag.fl_star = 1;
	var.total_width = (size_t)va_arg(args, int);
	*pos = *pos + 1;
	if (s[*pos] == '.')
		if (s[*pos + 1] == '*')
		{
			var.total_print = (size_t)va_arg(args, int);
			*pos = *pos + 1;
		}
	*pos = *pos + 1;
	return (var);
}
