/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 10:25:28 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/27 16:29:12 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "stdarg.h"
# include "unistd.h"

/*
** A SUPPRIMER
*/

# include <stdio.h>

/*
** -----------
*/
typedef struct	s_var
{
	char			flag;
	int				total_width;
	int				total_print;
	char			type;
}				t_var;

/*
** struct du printf
** %[0.-%][0-INF][.][0-INF]d
** ^   ^     ^        ^    ^
** |   |     |        |    |
** |   |     |        |    Type de var afficher
** |   |     |          total print char
** |   |     Total Width
** |   Flags
** symbole de debut
*/

/*
** struct
*/
t_var		ft_init_struct(t_var st);
/*
** display
*/
void		ft_putchar(char c);
/*
** verif
*/
t_var		ft_verif_pourcent(char *s);
int			ft_verif_isdigit(int c);
/*
** main
*/
int			ft_printf(const char *str, va_list ap);

#endif
