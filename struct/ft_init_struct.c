/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 14:34:14 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/06 21:04:07 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_init_struct(t_var *var)
{
	(*var).flag.minus = 0;
	(*var).flag.zero = 0;
	(*var).flag.point = 0;
	(*var).flag.star = 0;
	(*var).total_print = 0;
	(*var).total_width = 0;
	(*var).type = '0';
	(*var).error = 0;
}