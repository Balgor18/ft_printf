/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 10:25:28 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/28 23:43:54 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "stdarg.h"
# include "unistd.h"
# include <stdlib.h>
/*
** A SUPPRIMER
*/

# include <stdio.h>

/*
** -----------
*/

typedef struct	s_flag
{
	int			fl_star;
	int			fl_less;
	int			fl_zero;
	int			fl_point;
}				t_flag;

typedef struct	s_var
{
	t_flag			flag;
	size_t			total_width;
	size_t			total_print;
	char			type;
	int				ERROR;
}				t_var;

/*
** struct du printf
** %[0.-*][0-INF][.][0-INF]d
** ^   ^     ^        ^    ^
** |   |     |        |    |
** |   |     |        |    Type de var afficher
** |   |     |          total print char
** |   |     Total Width
** |   Flags
** symbole de debut
*/
/*
** include
*/
void			ft_putchar(char c);
void			*ft_memset(void *pointeur, int val, size_t size);
int				ft_strlennb(char *s);
size_t			ft_atoi(char *c);
/*
** struct
*/
t_var			ft_fill_struct(char *s, t_var var);
t_var			ft_init_struct(t_var st);
t_var			ft_init_flag_in_struct(t_var s);
t_var			ft_fill_w_and_tp(char *s, t_var var);
char			*ft_fill_nb(char *s, char *nb);
/*
** verif
*/
t_var			ft_verif_pourcent(char *s, va_list ap);
int				ft_verif_isdigit(int c);
t_var			ft_check_flags(t_var var, char *s);
void			ft_check_type(t_var var);
/*
** main
*/
int				ft_printf(const char *str, va_list ap);

#endif
