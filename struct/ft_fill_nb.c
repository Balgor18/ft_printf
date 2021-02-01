/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_nb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 16:09:02 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/01 16:09:02 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*ft_fill_nb(char *s, char *nb, size_t last)
{
	size_t	i;

	i = 0;
	while (ft_verif_isdigit(s[last]))
	{
		nb[i] = s[last];
		last++;
		i++;
	}
	nb[i] = '\0';
	return (nb);
}