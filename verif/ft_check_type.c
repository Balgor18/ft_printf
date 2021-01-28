/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 19:20:03 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/28 19:21:08 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* affichage */
/* cas a gerez cspdiuxX% */
void		ft_check_type(t_var var)
{
	if (var.type == 'c')
	{
		/*Alors je fais un truc */
	}
	if (var.type == 's')
	{
		/*Alors je fais un truc */
	}
	if (var.type == '%')
		ft_putchar(var.type);
	if (var.type == 'd')
	{
		/*Alors je fais un truc */
	}
}
/*
void		ft_check_type2(t_var var)
{
	if (var.type == 'c')
	{
		//Alors je fais un truc 
	}
	if (var.type == 's')
	{
		//Alors je fais un truc
	}
	if (var.type == '%')
		ft_putchar(var.type);
	if (var.type == 'd')
	{
		//Alors je fais un truc
	}
}*/