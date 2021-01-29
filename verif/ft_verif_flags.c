/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 16:16:52 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/29 18:26:32 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_verif_pourcent(char *s, va_list ap, size_t *pos)
{
	t_var	var;

	*pos = *pos + 1;
	(void)ap; // voir pous la use plus tard
	var = ft_init_struct();
	var = ft_check_flags(var, s, pos);
	var = ft_fill_struct(s, var, pos);
	printf("var.total width %zu \n", var.total_width);
	if (var.ERROR)
		return (0);
	//ft_flags();
	var = ft_check_type(var);
	return (1);
}

t_var		ft_check_flags(t_var var, char *s, size_t *pos)
{
	if (s[*pos] == '-' && s[*pos])
	{
		var.flag.fl_less = 1;
		*pos = *pos + 1;
	}
	if (s[*pos] == '0' && s[*pos])
	{
		var.flag.fl_zero = 1;
		*pos = *pos + 1;
	}
	if (s[*pos] == '.' && s[*pos])
	{
		var.flag.fl_point = 1;
		*pos = *pos + 1;
	}
	if (s[*pos] == '*' && s[*pos])
	{
		var.flag.fl_star = 1;
		*pos = *pos + 1;
	}
	return (var);
}
