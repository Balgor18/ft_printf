/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 16:16:52 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/30 10:11:39 by fcatinau         ###   ########.fr       */
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
	var = ft_fill_struct(s, var, pos);
	if (var.error)
		return (0);
	ft_manager(args, var);
	var = ft_check_type(var);
	return (1);
}

t_var		ft_check_flags(t_var var, char *s, size_t *pos, va_list args)
{
	while (check_type(s[*pos]))
	{
		if (s[*pos] == '-')// faire while avec fonction de check is type
			var.flag.fl_less = 1;
		else if (s[*pos] == '0')
			var.flag.fl_zero = 1;
		else if (s[*pos] == '.')
			var.flag.fl_point = 1;
		else if (s[*pos] == '*')
			var = flag_star(var, args, s, pos);// check la fonction voir si ses ok 
		// cas preci a gere printf("prout : %*.*i", 10, 20, 30)
		// donc si les etoiles prennent la premiere valeur int quil rencontre comme width et total_print
		*pos = *pos + 1;
	}
	return (var);
}
