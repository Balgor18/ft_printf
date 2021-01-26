/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 16:16:52 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/26 17:04:54 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** Voir ce que fais chacun des flags du dessous
** donc le - avec 0 puis . et #
*/

/*
**  verif si besoin de reonvyer 1 sinpn 0 = faux et 1 = vrai
*/

int		ft_verif_flags(char *str)
{
	if (*str && *str + 1)
		return (-1);
	if (*str + 1 == '-')
	{
		// = ajoute un truc dans ma struc flag
	}
	if (*str + 1 == '0')
	{
		// = deuxieme truc dans ma structure
	}
	if (*str + 1 == '.')
	{
		// = Quatrieme truc dans ma structure
	}
	if (*str + 1 == '#')
	{
		// Je pense renvoyer vers une autre fonction pour faire les differents cas
	}
	return (0);
}
