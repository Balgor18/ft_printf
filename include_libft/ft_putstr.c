/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 17:27:24 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/04 20:05:38 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_var		ft_putstrint(char *str, t_var var)
{
	int i;
	int nbr;

	nbr = ft_atoi(str);
	i = -1;
	if (nbr < 0 && var.already_print == 0)
	{
		ft_putchar(str[0]);
		i--;
		var.write_char++;
	}
	//printf("tp nega %d || width nega %d \n",var.tp_is_nega, var.width_is_nega);
	if (!var.width_is_nega && !var.tp_is_nega)
		if (var.total_print > 0 && var.flag.fl_less)
			while(var.total_print > (++i + ft_strlen(str)))
			{
				ft_putchar('0');
				var.write_char++;
			}
	if (nbr < 0)
		i = 0;
	else
		i = -1;
	while (str[++i])
	{
		ft_putchar(str[i]);
		var.write_char++;
	}
	return (var);
}

t_var	ft_putstr(char *str, t_var var)
{
	int		i;

	i = -1;
	if (str == NULL)
	{
		var = ft_putstr("(null)", var);
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
