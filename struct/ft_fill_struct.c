/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 15:42:43 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/28 19:04:05 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** verif car le while n'est pas bon donc je pense
** mettre dans un char * qui est malloc donc free derriere mais d'abord
** faire un strlen special pour les digit
** 
*/
t_var		ft_fill_struct(char *s, t_var var)
{
	ft_fill_w_and_tp(*s, var);
	if (var.ERROR)
		return(var);
	var.type = *s;// verif la valeur de *s
	return (var);
}

t_var		ft_fill_w_and_tp(char *s, t_var var)
{
	char	*nb;
	size_t	size_nb;

	size_nb = ft_strlennb(*s);
	if (!(nb = malloc(sizeof(char)* (size_nb + 1))))
	{
		var.ERROR = 1;
		return (var);
	}
	nb = ft_fill_nb(*s, nb);// voir ce que recup nb de la fonction 
	var.total_width = ft_atoi(nb);
	ft_memset(nb, 0, size_nb);// verif si nb a encore des valeur
	size_nb = 0;
	if (*s == '.')
	{
		nb = ft_fill_nb(*s, nb);
		var.total_print = ft_atoi(nb);
	}
	free(nb);
	return (var);
}

char		*ft_fill_nb(char *s, char *nb)// test de voir ce que renvoie la fonction
{
	size_t	i;

	i = 0;
	while (ft_verif_isdigit(*s))
	{
		nb[i] = *s;
		*s++;
		i++;
	}
	nb[i] = '\0';
	return (nb);
}