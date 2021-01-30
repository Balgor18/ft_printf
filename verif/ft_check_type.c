/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 19:20:03 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/30 12:10:49 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* affichage */
/* cas a gerez cspdiuxX% */
t_var		ft_check_type(t_var var)
{
	if (var.type == 'c')
	{
		/*Alors je fais un truc */
	}
	if (var.type == 's')
	{
		/*Alors je fais un truc */
	}
	if (var.type == 'p')
	{
		/*Alors je fais un truc */
	}
	if (var.type == 'd')
	{
		//ft_print_int();
	}
	var = ft_check_type2(var);
	return (var);
}
/* Voir plus tard pour modif */

t_var		ft_check_type2(t_var var)
{
	if (var.type == 'i')
	{
		//Alors je fais un truc
	}
	if (var.type == 'u')
	{
		//Alors je fais un truc
	}
	if (var.type == 'x')
	{
		//Alors je fais un truc
	}
	if (var.type == 'X')
	{
		//Alors je fais un truc
	}
	if (var.type == '%')
		ft_putchar(var.type);
	return (var);
}