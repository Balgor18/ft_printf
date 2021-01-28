/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 15:42:43 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/28 15:14:50 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** verif car le while n'est pas bon donc je pense
** mettre dans un char * qui est malloc donc free derriere mais d'abord
** faire un strlen special pour les digit
** 
*/
t_var		ft_fill_struct(char *s, t_var var)
{
	while (ft_verif_isdigit(*s))
	{
		var.total_width = ft_atoi(*s);
		*s++;
	}
	if (*s == '.')
		while (ft_verif_isdigit(*s))
		{
			var.total_print = ft_atoi(*s);
			*s++;
		}
	var.type = *s;
	return (var);
}
