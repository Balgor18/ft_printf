/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 13:50:31 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/28 23:23:53 by fcatinau         ###   ########.fr       */
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

int		main(void)
{
	printf("Debut des test : \n");
	printf("real %c%c\n",'%','%');
	printf("real %%\n","test");
	printf("me :\n");
	ft_printf("me %%\n","test");
	printf("------------------");
	printf("real \n");
	ft_printf("me %-c\n","te");
	printf("me :\n");
	ft_printf("me %-c\n","te");
	printf("%-23s<--\n", "bonjour tout le monde");
	printf("%023s<--\n", "bonjour tout le monde");
	return (0);
}

/*
** 	printf("%#x\n", 17);
** 	printf("%#X\n", 17);
** 	printf("%#f\n", 1.42);
** 	printf("%#A\n", 1.42);
*/
