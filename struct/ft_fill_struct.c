/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 15:42:43 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/28 11:26:08 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_var		ft_fill_struct(char *s, t_var var)
{
	while (ft_verif_isdigit(*s))
	{
		var.total_width += ft_atoi(*s);
		*s++;
	}
	if (*s == '.')
		while (ft_verif_isdigit(*s))
		{
			var.total_print += ft_atoi(*s);
			*s++;
		}
	var.type = *s;
	return (var);
}
