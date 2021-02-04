/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 14:34:14 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/04 20:01:36 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_var		ft_init_struct(t_var var)
{
	var.flag.fl_less = 0;
	var.flag.fl_zero = 0;
	var.flag.fl_point = 0;
	var.flag.fl_star = 0;
	var.total_print = -1;
	var.tp_is_nega = 0;
	var.total_width = -1;
	var.width_is_nega = 0;
	var.already_print = 0;
	var.type = '0';
	var.error = 0;
	return (var);
}
