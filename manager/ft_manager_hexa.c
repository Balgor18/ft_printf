/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manager_hexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 11:25:27 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/03 17:56:35 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_str_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = (str[i] - 32);
		i++;
	}
	return (str);
}

t_var		ft_manager_hexa(char *str, t_var var)
{
	if (var.type == 'X')
		str = ft_str_toupper(str);
	if (var.total_print > 0 && var.flag.fl_less)
	{
		var.total_print = -1;
		var.flag.fl_less = 0;
	}
	if (var.flag.fl_less)
	{
		var = ft_putstrint(str, var);
		if (var.total_width > 0)
			var = print_widthint(var, str);
	}
	else
	{
		if (var.total_width > 0)
			var = print_widthint(var, str);
		var = ft_putstrint(str, var);
	}
	return (var);
}