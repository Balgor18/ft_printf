/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlennb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 16:56:18 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/29 21:41:42 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_strlennb(char *s, size_t *pos)
{
	size_t	i;

	i = 0;
	while (ft_verif_isdigit(s[*pos]))
	{
		*pos = *pos + 1;
		i++;
	}
	return (i);
}
