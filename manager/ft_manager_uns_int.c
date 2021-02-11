/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manager_uns_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 15:31:21 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/11 11:44:54 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_send_uint_in_printer(t_var var, char *strnbr)
{
	int count;

	count = 0;
	if (var.total_print > ft_strlen(strnbr) && var.total_width >=
	ft_strlen(strnbr))
		var.total_width = var.total_print + 1;
	if (var.flag.point == 1)
	{
		if (var.total_print > ft_strlen(strnbr) && var.total_width
		!= var.total_print + 1)
		{
			if (var.total_print > ft_strlen(strnbr))
				count += ft_width_manager(var.total_print,
				ft_strlen(strnbr), 1);
			else
				count += ft_width_manager(var.total_print - 1,
				var.total_width, 1);
		}
		else
			count += ft_width_manager(var.total_width - 1,
			ft_strlen(strnbr), 1);
	}
	count += ft_putnstr(strnbr, ft_strlen(strnbr));
	return (count);
}

int		ft_where_to_width_uint(char *strnbr, t_var var, int count)
{
	int size;

	size = ft_strlen(strnbr);
	if (var.flag.minus == 1)
		count += ft_send_uint_in_printer(var, strnbr);
	if (var.total_print < size && var.flag.point == 1
	&& var.total_print != 0)
		var.total_print = size;
	if (var.flag.point == 1)
	{
		if (var.total_print > var.total_width || var.total_print == 0 || var.total_print == size)
		{
			if (var.total_width > size && (var.total_print == 0 || var.total_print == size))
			{
				if (var.flag.zero == 1)
					var.flag.zero = 0;
				var.total_width = var.total_print + 1;
			}
			else
				var.total_width = var.total_print;
		}
		else
			var.total_width = var.total_width - var.total_print;
		if (var.total_width < 0)
			var.total_width = var.total_width * -1;
		count += ft_width_manager(var.total_width, var.total_print,
		var.flag.zero);
	}
	else
		count += ft_width_manager(var.total_width, size, var.flag.zero);
	if (var.flag.minus == 0)
		count += ft_send_uint_in_printer(var, strnbr);
	return (count);
}

/*
** printf("\nvoir les infos \n");
** printf("var.flag.minus %d \n",var.flag.minus);
** printf("var.flag.point %d \n",var.flag.point);
** printf("var.flag.star %d \n",var.flag.star);
** printf("var.flag.zero %d \n",var.flag.zero);
** printf("var.total_width %d\n",var.total_width);
** printf("var.total_print %d\n",var.total_print);
*/

int		ft_unsigned_manager(t_var var, unsigned int nbr)
{
	int		count;
	char	*strnbr;

	count = 0;

	strnbr = ft_unsigned_itoa((unsigned long long)nbr);
	if (nbr == 0 && var.total_width >= 0 && var.flag.point == 1)
	{
		if (var.total_print > 0 && (var.total_width == 0 ||
		var.total_print >= ft_strlen(strnbr)))
			count += ft_width_manager(var.total_print, 0, 1);
		else
			count += ft_width_manager(var.total_width, 0, 0);
		return (count);
	}
	count = ft_where_to_width_uint(strnbr, var, count);
	free(strnbr);
	return (count);
}
