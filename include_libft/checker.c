/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 18:51:57 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/07 21:46:02 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

int		istype(int c)
{
	if ((c == 'c') || (c == 's') || (c == 'p') || (c == 'd') || (c == 'i')
		|| (c == 'u') || (c == 'x') || (c == 'X') || (c == '%'))
		return (1);
	else
		return (0);
}

int		isflag(int c)
{
	if ((c == '-') || (c == '0') || (c == '.') || (c == '*'))
		return (1);
	else
		return (0);
}

int		ft_str_is_0(char *c, t_var var)
{
	if(c[0] == '0' && var.flag.minus)
		return (1);
	return (0);
}