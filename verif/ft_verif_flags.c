/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 16:16:52 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/01 20:37:44 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			check_type(char c)
{
	if (c == '-' || c == '0' || c == '.' || c == '*')
		return (1);
	return (0);
}

int			ft_verif_pourcent(char *s, va_list args, size_t *pos)
{
	t_var	var;

	*pos = *pos + 1;
	var = ft_init_struct();
	var = ft_check_flags(var, s, pos, args);
//	printf("%d = %d || s[*pos] = %c\n",var.total_print, var.total_width, s[*pos]);
//	printf("\n*pos = %zu\n ", *pos);
	var = ft_fill_struct(s, var, pos, args);
	if (var.error)
		return (0);
/*
	printf("\nvar.flag.fl_less %d \n",var.flag.fl_less);
	printf("var.flag.fl_point %d \n",var.flag.fl_point);
	printf("var.flag.fl_star %d \n",var.flag.fl_star);
	printf("var.flag.fl_zero %d \n",var.flag.fl_zero);
	printf("var.total_print %d \n", var.total_print);
	printf("var.total_width %d \n",var.total_width);
	printf("var.type %c\n", var.type);
*/
	ft_manager_type(args, var);
	return (1);
}

t_var		ft_check_flags(t_var var, char *s, size_t *pos, va_list args)
{
	while (check_type(s[*pos]))
	{
		if (s[*pos] == '-')
		{
			var.flag.fl_less = 1;
			var.flag.fl_zero = 0;
		}
		else if (s[*pos] == '0')
			var.flag.fl_zero = 1;
		else if (s[*pos] == '.')
			var.flag.fl_point = 1;
		else if (s[*pos] == '*')
		{
			var = flag_star(var, args, s, pos);
			break ;
		}
		*pos = *pos + 1;
	}
	return (var);
}
