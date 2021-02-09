/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 10:25:28 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/09 16:03:02 by fcatinau         ###   ########.fr       */
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
	int			star;
	int			minus;
	int			zero;
	int			point;
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
int				ft_putchar(char c);
int				isdigit(int c);
int				istype(int c);
int				isflag(int c);
int				ft_putchar(char c);
int				ft_strlen(char *str);
int				ft_putstr(char *s);
int				ft_putnstr(char *s, int to_print);
char			*ft_strdup(const char *s1);
size_t			ft_atoi(char *c);
char			*ft_itoa(long int n);
char			*ft_hex_base(unsigned long long nbr);
char			*ft_unsigned_itoa(unsigned long long n);
int				ft_str_is_0(char *c, t_var var);
int				ft_print_min_int(char *str);

int				ft_type_manager(t_var var, char type, va_list args);
int				ft_width_manager(int width, int width_after, int flag_zero);
int				ft_hex_manager(t_var var, unsigned int nbr);
int				ft_int_manager(t_var var, long int nbr);
int				ft_pointer_manager(t_var var, unsigned long long nbr);
int				ft_unsigned_manager(t_var var, unsigned int nbr);
int				ft_string_manager(t_var var, char *str);

void			ft_init_struct(t_var *var);

int				ft_flag_point(const char *content, va_list args, t_var *var, int index);
t_var			ft_flag_star(t_var var, va_list args);
t_var			ft_flag_isdigit(t_var var, char digit);

int				ft_printf(const char *str, ...);

#endif
