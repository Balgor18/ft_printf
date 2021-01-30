/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 15:35:06 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/30 09:50:56 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_strlen(char *c)
{
	int i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

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
