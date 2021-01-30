/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manager.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 17:26:31 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/30 21:55:24 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** voir ce que je fais dedans
*/

t_var		witdh_and_total_print(t_var var)
{
	size_t	i;
	char	print;

	print = ' ';
	if (var.flag.fl_zero)
		print = '0';
	i = 0;
	if (!(var.total_print > var.total_width))
		while (var.total_width != i)//(i + size_valeur)
		{
			ft_putchar(print);
			i++;
		}
	else
		while (var.total_print != i)//(i + size_valeur)
		{
			ft_putchar(print);
			i++;
		}
	return (var);
}

void		ft_manager(va_list args, t_var var)
{
	//faire le cas du flag '-'
	(void)args;
	witdh_and_total_print(var);
}
