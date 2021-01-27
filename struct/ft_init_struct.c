/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 14:34:14 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/27 14:42:14 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_var		ft_init_struct(t_var st)
{
	st.flag = NULL;
	st.total_print = -1;
	st.total_width = -1;
	st.type = NULL;
	return (st);
}
