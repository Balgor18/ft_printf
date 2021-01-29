/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 15:42:43 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/29 22:13:48 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** verif car le while n'est pas bon donc je pense
** mettre dans un char * qui est malloc donc free derriere mais d'abord
** faire un strlen special pour les digit
*/

t_var		ft_fill_struct(char *s, t_var var, size_t *pos)
{
	var = ft_fill_w_and_tp(s, var, pos);
	if (var.error)
		return (var);
	var.type = s[*pos];
	return (var);
}

t_var		ft_fill_w_and_tp(char *s, t_var var, size_t *pos)
{
	char	*nb;
	size_t	size_nb;
	size_t	last;

	last = *pos;
	size_nb = ft_strlennb(s, pos);
	if (!(nb = malloc(sizeof(char) * (size_nb + 1))))
	{
		var.error = 1;
		return (var);
	}
	nb = ft_fill_nb(s, nb, last);
	var.total_width = ft_atoi(nb);
	ft_memset(nb, 0, size_nb);
	size_nb = 0;
	if (s[*pos] == '.')
	{
		*pos = *pos + 1;
		last = *pos;
		size_nb = ft_strlennb(s, pos);
		nb = ft_fill_nb(s, nb, last);
		var.total_print = ft_atoi(nb);
	}
	free(nb);
	return (var);
}

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
