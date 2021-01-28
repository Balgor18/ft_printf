/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 14:34:14 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/28 23:41:57 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_var		ft_init_struct(t_var st)
{
	ft_init_flag_in_struct(st);
	st.total_print = -1;
	st.total_width = -1;
	st.type = '0';
	st.ERROR = 0;
	return (st);
}

t_var		ft_init_flag_in_struct(t_var s)
{
	s.flag.fl_less = 0;
	s.flag.fl_zero = 0;
	s.flag.fl_point = 0;
	s.flag.fl_star = 0;
	return (s);
}
