/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 14:34:14 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/28 11:25:50 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_var		ft_init_struct(t_var st)
{
	ft_init_flag_in_struct(st);
	st.total_print = -1;
	st.total_width = -1;
	st.type = NULL;
	return (st);
}

t_var		ft_init_flag_in_struct(t_var s)
{
	s.flag.fl_less = NULL;
	s.flag.fl_zero = NULL;
	s.flag.fl_point = NULL;
	s.flag.fl_per = NULL;
	return (s);
}
