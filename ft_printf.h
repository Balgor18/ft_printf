/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 10:25:28 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/27 14:24:41 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "stdarg.h"
# include "unistd.h"

typedef struct	t_var
{
	char		flag;
	int			total_width;
	int			total_print;
	char		type;
};
/*
** struct du printf
** %[0.-%][0-INF][.][0-INF]d
** ^   ^     ^          ^  ^
** |   |     |          |  |
** |   |     |          |  Type de var afficher
** |   |     |          total print char
** |   |     Total Width
** |   Flags
** symbole de debut
*/

int		ft_printf(const char *str, va_list ap);
void	ft_putchar(char c);
#endif
