/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 19:20:03 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/31 18:03:30 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* affichage */
/* cas a gerez cspdiuxX% */
t_var		ft_check_type(t_var var, va_list args)
{
	if (var.type == 'c')
		ft_putchar(va_arg(args, int));
	else if (var.type == 's')
		ft_putstr(va_arg(args, char *));
	else if (var.type == 'p')
	{
		/*Alors je fais un truc */
	}
	else if (var.type == 'd')
		ft_putstr(ft_itoa(va_arg(args, int)));
	var = ft_check_type2(var, args);
	return (var);
}

t_var		ft_check_type2(t_var var, va_list args)
{
	(void)args;

	if (var.type == 'i')
	{
		//Alors je fais un truc
	}
	else if (var.type == 'u')
	{
		//Alors je fais un truc
	}
	else if (var.type == 'x')
	{
		//Alors je fais un truc
	}
	else if (var.type == 'X')
	{
		//Alors je fais un truc
	}
	else if (var.type == '%')
		ft_putchar(var.type);
	return (var);
}