/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 17:27:24 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/03 18:27:09 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_var	ft_pustrint(char *str, t_var var)
{
	int	i;
	int	print_zero;

	i = -1;
	print_zero = ft_strlen(str) - var.total_print;
	if (print_zero < 0)
		print_zero = print_zero * -1;
	while (print_zero != ft_strlen(str))
	{
		ft_putchar('0');
		print_zero--;
	}
	while (str[++i])
		ft_putchar(str[i]);
	var.write_char = var.write_char + i;
	return (var);
}

t_var	ft_putstr(char *str, t_var var)
{
	int		i;

	i = -1;
	if (str == NULL)
	{
		var = ft_putstr("(null)",var);
		return (var);
	}
	if (var.total_print < 0)
		while (str[++i])
			ft_putchar(str[i]);
	else
		while (var.total_print > ++i && str[i])
			ft_putchar(str[i]);
	var.write_char = var.write_char + i;
	return (var);
}
