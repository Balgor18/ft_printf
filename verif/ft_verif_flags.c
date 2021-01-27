/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 16:16:52 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/27 15:43:54 by fcatinau         ###   ########.fr       */
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
	if (*s + 1 == '-' || *s + 1 == '0' || *s + 1 == '.' || *s + 1 == '%')
		var.flag = *s + 1;
	ft_fill_struct(*s + 1, var);
	return (var);
}
