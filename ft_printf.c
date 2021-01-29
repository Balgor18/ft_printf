/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 10:24:32 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/29 16:51:18 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_parser(char *str, va_list ap)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		// voir comment avance dans str sans dans les autre fonction pour que quand il reviens ici il ne soit plus a la position de depart
		if (str[i] == '%')
		{
			if (!ft_verif_pourcent(&str[i + 1], ap, &i))
				return (0);
		}
		else{
			ft_putchar(str[i]);
		}
		i++;
	}
	return (1);
}

int		ft_printf(const char *str, ...)
{
	va_list args;
	if (!ft_parser((char *)str, args))
		return (-1);
	return (0);
}

