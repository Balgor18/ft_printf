/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 13:50:31 by fcatinau          #+#    #+#             */
/*   Updated: 2021/01/29 21:32:00 by fcatinau         ###   ########.fr       */
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
	int test;
	printf("Debut des test : \n");
	printf("------------------\n");
	/*printf("-------- %c%c\n",'%','%'); voir pourquoi ce test la ne marche pas avec celui de dessous 
	printf("reprintf %%\n");
	test = ft_printf("meprintf %%\n");
	printf("return value = %d \n",test);
	printf("------------------\n");
	printf("-------- %c%c test\n",'%','%');
	printf("reprintf %% test\n");
	test = ft_printf("meprintf %% test\n");
	printf("return value = %d \n",test);
	printf("------------------\n");*/
	printf("-------- %c10%c test\n",'%','%');
	printf("reprintf %10% test\n");
	test = ft_printf("meprintf %10% test\n");
	printf("return value = %d \n",test);
	printf("------------------\n");
	printf("-------- %c%c%c 42\n",'%','0','d');
	printf("reprintf %0d \n",42);
	test = ft_printf("meprintf %0d \n",42);
	printf("return value = %d \n",test);
	printf("------------------\n");
	printf("-------- %c%c10%c 42\n",'%','0','d');
	printf("reprintf %010.10d \n",42);
	test = ft_printf("meprintf %010d \n",42);
	printf("return value = %d \n",test);
	printf("------------------\n");
	/*printf("real \n");
	ft_printf("me %-c\n","te");
	printf("me :\n");*/
	//printf("-------- %c%c%c%c\n",'%','-','.','s');
	//printf("reprintf %-.s test\n","t");
	//ft_printf("meprintf %-.s test\n","t");
	//printf("%-23s<--\n", "bonjour tout le monde");*/
	//printf("%023s<--\n", "bonjour tout le monde");
	return (0);
}

/*
** 	printf("%#x\n", 17);
** 	printf("%#X\n", 17);
** 	printf("%#f\n", 1.42);
** 	printf("%#A\n", 1.42);
*/
