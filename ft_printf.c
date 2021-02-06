/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 10:24:32 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/06 20:57:11 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_check_flags(const char *content, int i, va_list args, t_var *var)
{
	while (content[i])
	{
		if (!istype(content[i]) && !isdigit(content[i]) && !isflag(content[i]))
			break ;
		if (content[i] == '-')
		{
			(*var).flag.minus = 1;
			(*var).flag.zero = 0;
		}
		if (content[i] == '0' && (*var).flag.minus == 0 && (*var).total_width == 0)
			(*var).flag.zero = 1;
		if (content[i] == '.')
			i = ft_flag_point(content, args, var, i);
		if (content[i] == '*')
			*var = ft_flag_star(*var, args);
		if (istype(content[i]))
		{
			(*var).type = content[i];
			break ;
		}
		if (isdigit(content[i]))
			*var = ft_flag_isdigit(*var, content[i]);
		i++;
	}
	return (i);
}

int		ft_content_manager(const char *content, va_list args)
{
	int		i;
	int		count;
	t_var	var;

	i = 0;
	count = 0;
	ft_init_struct(&var);
	while (content[i])
	{
		ft_init_struct(&var);
		if (content[i] == '%' && content[i + 1])
		{
			i = ft_check_flags(content, i + 1, args, &var);
			if (istype(content[i]))
				count += ft_type_manager(var, (char)var.type, args);
			else if (content[i])
				count += ft_putchar(content[i]);
		}
		else if (content[i] != '%')
			count += ft_putchar(content[i]);
		i++;
	}
	return (count);
}

int		ft_printf(const char *str, ...)
{
	int				nb_print;
	const char		*content;
	va_list			args;

	nb_print = 0;
	content = ft_strdup(str);
	va_start(args, str);
	nb_print = ft_content_manager(content, args);
	va_end(args);
	free((char *)content);
	return (nb_print);
}
