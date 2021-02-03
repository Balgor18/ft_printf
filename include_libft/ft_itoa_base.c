/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 11:55:31 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/03 11:55:41 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_rev_tab(char *tab, int size)
{
	int		i;
	char	tmp;

	i = 0;
	if (size == 0)
		size++;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
	tab[size] = '\0';
	return (tab);
}

char	*ft_itoa_base(unsigned long long nbr, char *base, char *tab)
{
	int		size_base;
	int		i;

	i = 0;
	size_base = 16;
	if (nbr == 0)
		tab[i] = base[nbr % size_base];
	while (nbr)
	{
		tab[i++] = base[nbr % size_base];
		nbr /= size_base;
	}
	return (ft_rev_tab(tab, i));
}

char	*ft_hex_base(unsigned long long nbr)
{
	char					*tab;

	tab = malloc(sizeof(char) * 25);
	tab = ft_itoa_base(nbr, "0123456789abcdef", tab);
	return (tab);
}