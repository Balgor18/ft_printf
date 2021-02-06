/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manager_hexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 11:25:27 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/06 20:45:52 by fcatinau         ###   ########.fr       */
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

int		ft_send_hex_in_printer(t_var var, char *strnbr)
{
	int count;

	count = 0;
	if (var.flag.point == 1)
		count += ft_width_manager(var.total_print - 1,
		ft_strlen(strnbr) - 1, 1);
	count += ft_putnstr(strnbr, ft_strlen(strnbr));
	return (count);
}

int		ft_where_to_width_hex(char *strnbr, t_var var, int count)
{
	if (var.flag.minus == 1)
		count += ft_send_hex_in_printer(var, strnbr);
	if (var.total_print < ft_strlen(strnbr) && var.flag.point == 1)
		var.total_print = ft_strlen(strnbr);
	if (var.flag.point == 1)
	{
		var.total_width = var.total_width - var.total_print;
		count += ft_width_manager(var.total_width, 0, 0);
	}
	else
		count += ft_width_manager(var.total_width, ft_strlen(strnbr), var.flag.zero);
	if (var.flag.minus == 0)
		count += ft_send_hex_in_printer(var, strnbr);
	return (count);
}

int		ft_hex_manager(t_var var, unsigned int nbr, int caps)
{
	int					count;
	char				*strnbr;

	nbr = 0 + (unsigned int)(4294967295 + 1 + nbr);
	count = 0;
	if (nbr == 0 && var.total_width == 0 && var.flag.point == 1)
	{
		count += ft_width_manager(var.total_width, 0, 0);
		return (count);
	}
	strnbr = ft_hex_base((unsigned long long)nbr);
	if (caps == 1)
		strnbr = ft_str_toupper(strnbr);
	count = ft_where_to_width_hex(strnbr, var, count);
	free(strnbr);
	return (count);
}