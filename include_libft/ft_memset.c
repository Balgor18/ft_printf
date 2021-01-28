/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 22:59:09 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/28 17:21:49 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_memset(void *pointeur, int val, size_t size)
{
	unsigned int	i;
	unsigned char	*copy;

	i = 0;
	copy = (unsigned char *)pointeur;
	while (i < size)
		copy[i++] = (unsigned char)val;
	pointeur = (void *)copy;
	return (pointeur);
}
