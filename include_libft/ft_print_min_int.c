/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_min_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 00:19:25 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/13 14:49:35 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_print_min_int(char *str)
{
	int i;

	i = 1;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i - 1);
}
