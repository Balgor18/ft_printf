/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 13:50:31 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/27 14:23:36 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

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

/*
** printf("Le flag %c%c = ", '%', '%');
** printf("%%\n");
** printf("Le flag %c%c = ", '%', '-');
** printf("%s- tu vas ou a gauche ou a droite \n");
*/

int		main(void)
{
	printf("Ex :\n");
	printf("%-23s<--\n", "bonjour tout le monde");
	printf("%023s<--\n", "bonjour tout le monde");
//	ft_printf();
	return (0);
}

/*
** 	printf("%#x\n", 17);
** 	printf("%#X\n", 17);
** 	printf("%#f\n", 1.42);
** 	printf("%#A\n", 1.42);
*/
