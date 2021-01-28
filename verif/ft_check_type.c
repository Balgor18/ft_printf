/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 19:20:03 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/29 00:23:28 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* affichage */
/* cas a gerez cspdiuxX% */
void		ft_check_type(t_var var)
{
	//printf("var.type = %c\n",var.type);
	if (var.type == 'c')
	{
		/*Alors je fais un truc */
	}
	if (var.type == 's')
	{
		/*Alors je fais un truc */
	}
	if (var.type == 'p')
		ft_putchar(var.type);
	if (var.type == 'd')
	{
		/*Alors je fais un truc */
	}
	ft_check_type2(var);
}
/* Voir plus tard pour modif */

void		ft_check_type2(t_var var)
{
	if (var.type == 'i')
	{
		//Alors je fais un truc
	}
	if (var.type == 'u')
		ft_putchar(var.type);
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
}