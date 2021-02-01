/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 10:25:28 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/01 18:26:58 by fcatinau         ###   ########.fr       */
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
	t_flag		flag;
	int			total_width;
	int			total_print;
	char		type;
	int			error;
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
int				ft_strlennb(char *s, size_t *pos);
size_t			ft_atoi(char *c);
char			*ft_itoa(int n);
char			*ft_strdup(char *src);
int				ft_strlen(char *c);
size_t			ft_strlenint(int i);
void			ft_putstr(char *str, t_var var);
/*
** struct
*/
t_var			ft_fill_w(char *s, t_var var, size_t *pos, va_list args);
t_var			ft_fill_struct(char *s, t_var var, size_t *pos, va_list args);
t_var			ft_init_struct();
char			*ft_fill_nb(char *s, char *nb, size_t pos);
t_var			ft_fill_tp(char *s, t_var var, size_t *pos, va_list args);
/*
** Flags
*/
t_var			flag_star(t_var var, va_list args, char *s, size_t *pos);
/*
** verif
*/
int				ft_verif_pourcent(char *s, va_list ap, size_t *pos);
int				ft_verif_isdigit(int c);
t_var			ft_check_flags(t_var var, char *s, size_t *pos, va_list args);
t_var			ft_check_type(t_var var, char *args);
t_var			ft_check_type2(t_var var, char *args);
/*
** manager
*/
void			ft_manager(char *args, t_var var);
void			ft_manager_type(va_list args, t_var var);
void			ft_manager_char(char args, t_var var);
/*
** main
*/
int				ft_printf(const char *str, ...);

#endif
