/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manager_type.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 22:32:15 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/31 23:10:01 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_manager_type(va_list args, t_var var)
{
	if (var.type == 'c')
		ft_manager_char(va_arg(args, int), var);// args sera mtn egale a un str
	else if (var.type == 's')
		ft_manager(va_arg(args, char *), var);// args sera mtn egale a un str
	else if (var.type == 'd')
		ft_manager(ft_itoa(va_arg(args, int)), var);// args sera mtn egale a un str
	else if (var.type == '%')
		ft_manager_char('%', var);
}
