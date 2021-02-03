/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manager_type.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 22:32:15 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/03 13:20:04 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_manager_type(va_list args, t_var var)
{
	if (var.type == 'c')
		ft_manager_char(va_arg(args, int), var);
	else if (var.type == 's')
		ft_manager(va_arg(args, char *), var);
	else if (var.type == 'i')
		ft_manager_int(ft_itoa(va_arg(args, int)), var);
	else if (var.type == 'x')
		ft_manager_hexa(ft_hex_base((va_arg(args, unsigned int))), var);
	else if (var.type == '%')
		ft_manager_char('%', var);
}
