/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 15:34:19 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/13 14:51:13 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long int	ft_change_sign(long int nbr)
{
	if (nbr < 0)
		return (-nbr);
	else
		return (nbr);
}

int			ft_sign(long int n)
{
	if (n < 0)
		return (-1);
	else
		return (1);
}

int			ft_len(long int nbr)
{
	int len;

	if (nbr <= 0)
		len = 1;
	else
		len = 0;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(long int n)
{
	int			len;
	int			sign;
	char		*str;

	sign = ft_sign(n);
	len = ft_len(n);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	len--;
	while (len >= 0)
	{
		str[len] = '0' + ft_change_sign(n % 10);
		n = n / 10;
		len--;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
