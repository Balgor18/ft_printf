/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 15:42:43 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/01 21:42:52 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_var		ft_fill_struct(char *s, t_var var, size_t *pos, va_list args)
{
	if (var.total_width <= 0 && var.total_print <= 0)
		var = ft_fill_w(s, var, pos, args);
	if (var.error)
		return (var);
	var.type = s[*pos];
	return (var);
}

t_var		ft_tp_is_star(t_var var, va_list args, size_t *pos)
{
	int i;

	*pos = *pos + 1;
	i = va_arg(args, int);
	if (i > 0)
		var.total_print = i;
	return (var);
}

t_var		ft_fill_w(char *s, t_var var, size_t *pos, va_list args)
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
	free(nb);
	if (s[*pos] == '.')
		var = ft_fill_tp(s, var, pos, args);
	return (var);
}

t_var		ft_fill_tp(char *s, t_var var, size_t *pos, va_list args)
{
	size_t	last;
	size_t	size_nb;
	char	*nb;

	if (!ft_verif_isdigit(s[*pos]))
		*pos = *pos + 1;
	last = *pos;
	size_nb = ft_strlennb(s, pos);
	if (s[*pos] == '*')
		var = ft_tp_is_star(var, args, pos);
	else
	{
		if (!(nb = malloc(sizeof(char) * (size_nb + 1))))
		{
			var.error = 1;
			return (var);
		}
		nb = ft_fill_nb(s, nb, last);
		var.total_print = ft_atoi(nb);
		free(nb);
	}
	return (var);
}
