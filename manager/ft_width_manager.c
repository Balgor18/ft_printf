/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width_manager.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 00:47:14 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/04 00:47:15 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_width_manager(int width, int width_after, int flag_zero)
{
	int count;

	count = 0;
	while (width - width_after > 0)
	{
		if (flag_zero)
			ft_putchar('0');
		else
			(ft_putchar(' '));
		width--;
		count++;
	}
	return (count);
}