/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 17:27:24 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/01 00:03:44 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, t_var var)
{
	size_t	i;

	if (str == NULL)
		return ;
	i = 0;
	if (var.total_print == 0)
		while (str[i])
		{
			ft_putchar(str[i]);
			i++;
		}
	else
		while (var.total_print > i)
		{
			ft_putchar(str[i]);
			i++;
		}
}
