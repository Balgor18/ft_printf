/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <fcatinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 13:50:31 by fcatinau          #+#    #+#             */
/*   Updated: 2021/02/02 21:31:55 by fcatinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

/*
** struct du printf
** %[0.-*][0-INF][.][0-INF]d
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

	printf("\nTYPE FIELDS:\n\n");

	printf("\n CHAR AND POURCENT TEST : \n\n");
/*
	printf("%%c Character (%%*%% %%-10c prout, 3, 'c'): \n");
	printf("%*% %-10c prout\n", 3, 'c');
	ft_printf("%*% %-10c prout\n", 3, 'c');

	printf("%%c Character (%%-10%% %%10c prout, 'c'): \n");
	printf("%-10% %10c prout\n", 'c');
	ft_printf("%-10% %10c prout\n", 'c');

	printf("%%c Character (%%-*%% %%-*c prout, 'c'): \n");
	printf("%-*% %-*c prout\n", 10, 10, 'c');
	ft_printf("%-*% %-*c prout\n", 10, 10, 'c');

	printf("%%c Character (%%10.1%% prout): \n");
	printf("%10.1% prout\n");
	ft_printf("%10.1% prout\n");

	printf("%%c Character (%%-10%% prout): \n");
	printf("%-10% prout\n");
	ft_printf("%-10% prout\n");

	printf("%%c Character (%%10.20%% %%10.20c prout): \n");
	//printf("%10.20% %10.20c prout\n", 'c');// check why not use
	ft_printf("%10.20%% %10.20c prout\n", 'c');


	char *str = NULL;

	printf("\n\n STRING TEST : \n\n");

	printf("String test %%s (String is null) : %s prout\n", str);
	ft_printf("String test %%s (String is null) : %s prout\n", str);
	printf("String test %%s (String is "") : %s prout\n", "");
	ft_printf("String test %%s (String is "") : %s prout\n", "");
	printf("String test %%s : %s prout\n", "Hello");
	ft_printf("String test %%s : %s prout\n", "Hello");
	printf("String test %%10s : %10s prout\n", "Hello");
	ft_printf("String test %%10s : %10s prout\n", "Hello");
	printf("String test %%-10s : %-10s prout\n", "Hello");
	ft_printf("String test %%-10s : %-10s prout\n", "Hello");
	printf("String test %%*s (* is 10) : %*s prout\n", 10, "Hello");
	ft_printf("String test %%*s (* is 10) : %*s prout\n", 10, "Hello");
	printf("String test %%-*s (* is 10): %-*s prout\n", 10, "Hello");
	ft_printf("String test %%-*s (* is 10): %-*s prout\n", 10, "Hello");
	//printf("String test %%010s : %010s prout\n", "Hello");// check why not use
	//ft_printf("String test %%010s : %010s prout\n", "Hello");
	//printf("String test %%0*s (* is 10) : %0*s prout\n", 10, "Hello");// check why not use
	//ft_printf("String test %%0*s (* is 10) : %0*s prout\n", 10, "Hello");
	printf("String test %%10.4s : %10.4s prout\n", "Hello");
	ft_printf("String test %%10.4s : %10.4s prout\n", "Hello");
	printf("String test %%10.5s : %10.5s prout\n", "Hello");
	ft_printf("String test %%10.5s : %10.5s prout\n", "Hello");
	printf("String test %%10.6s : %10.6s prout\n", "Hello");
	ft_printf("String test %%10.6s : %10.6s prout\n", "Hello");
	printf("String test %%10.*s (* is -10) : %10.*s prout\n", -10, "Hello");
	ft_printf("String test %%10.*s (* is -10) : %10.*s prout\n", -10, "Hello");

	printf("String test %%*.4s (* is - 10) : %*.4s prout\n", -10, "Hello");
	ft_printf("String test %%*.4s (* is - 10) : %*.4s prout\n", -10, "Hello");
	//printf("String test %%0.4s : %0.4s prout\n", "Hello");// check why not use
	//ft_printf("String test %%0.4s : %0.4s prout\n", "Hello");
	printf("String test %%10.0s : %10.0s prout\n", "Hello");
	ft_printf("String test %%10.0s : %10.0s prout\n", "Hello");
	printf("String test %%*.*s (First * = 10, Second * = 5); %*.*s\n", 10, 5, "Hello");
	ft_printf("String test %%*.*s (First * = 10, Second * = 5); %*.*s\n", 10, 5, "Hello");
	printf("String test %%*.*s (First * = 10, Second * = 1); %*.*s\n", 10, 1, "Hello");
	ft_printf("String test %%*.*s (First * = 10, Second * = 1); %*.*s\n", 10, 1, "Hello");
	printf("String test %%*.*s (First * = 20, Second * = 30); %*.*s\n", 20, 30, "Hello");
	ft_printf("String test %%*.*s (First * = 20, Second * = 30); %*.*s\n", 20, 30, "Hello");
*/

	printf("\n\n INTEGER TEST : \n\n");
	int i = 12345;

	printf("String test %%i (i is 0) : %i prout\n", 0);
	ft_printf("String test %%i (i is 0) : %i prout\n", 0);
	//printf("String test %%i (i is INT_MIN) : %i prout\n", -2147483648);// check why not use
	//ft_printf("String test %%i (i is INT_MIN) : %i prout\n", -2147483648);
	printf("String test %%i (i is INT_MAX) : %i prout\n", 2147483647);
	ft_printf("String test %%i (i is INT_MAX) : %i prout\n", 2147483647);
	printf("String test %%i : %i prout\n", i);
	ft_printf("String test %%i : %i prout\n", i);
	printf("String test %%10i : %10i prout\n", i);
	ft_printf("String test %%10i : %10i prout\n", i);
	printf("String test %%-10i : %-10i prout\n", i);
	ft_printf("String test %%-10i : %-10i prout\n", i);
	printf("String test %%*i (* is 10) : %*i prout\n", 10, i);
	ft_printf("String test %%*i (* is 10) : %*i prout\n", 10, i);
	printf("String test %%-*i (* is 10): %-*i prout\n", 10, i);
	ft_printf("String test %%-*i (* is 10): %-*i prout\n", 10, i);
	printf("String test %%010i : %010i prout\n", i);
	ft_printf("String test %%010i : %010i prout\n", i);
	printf("String test %%0*i (* is 10) : %0*i prout\n", 10, i);
	ft_printf("String test %%0*i (* is 10) : %0*i prout\n", 10, i);
	printf("String test %%10.4i : %10.4i prout\n", i);
	ft_printf("String test %%10.4i : %10.4i prout\n", i);
	printf("String test %%10.5i : %10.5i prout\n", i);
	ft_printf("String test %%10.5i : %10.5i prout\n", i);
	printf("String test %%10.6i : %10.6i prout\n", i);
	ft_printf("String test %%10.6i : %10.6i prout\n", i);
	printf("String test %%10.*i (* is -10) : %10.*i prout\n", -10, i);
	ft_printf("String test %%10.*i (* is -10) : %10.*i prout\n", -10, i);
	printf("String test %%*.4i (* is - 10) : %*.4i prout\n", -10, i);
	ft_printf("String test %%*.4i (* is - 10) : %*.4i prout\n", -10, i);
	printf("String test %%0.4i : %0.4i prout\n", i);
	ft_printf("String test %%0.4i : %0.4i prout\n", i);
	printf("String test %%10.0i : %10.0i prout\n", i);
	ft_printf("String test %%10.0i : %10.0i prout\n", i);
	printf("String test %%*.*i (First * = 10, Second * = 5); %*.*i\n", 10, 5, i);
	ft_printf("String test %%*.*i (First * = 10, Second * = 5); %*.*i\n", 10, 5, i);
	printf("String test %%*.*i (First * = 10, Second * = 1); %*.*i\n", 10, 1, i);
	ft_printf("String test %%*.*i (First * = 10, Second * = 1); %*.*i\n", 10, 1, i);
	printf("String test %%*.*i (First * = 20, Second * = 30); %*.*i\n", 20, 30, i);
	ft_printf("String test %%*.*i (First * = 20, Second * = 30); %*.*i\n", 20, 30, i);

/*
	printf("\n\n HEXA TEST :\n\n");
	unsigned int j = 28036591;

	printf("Hexa test %%x : %x \n", j);
	//ft_printf("Hexa test %%x : %x \n", j);
	printf("Hexa test %%10x : %10x \n", j);
	//ft_printf("Hexa test %%10x : %10x \n", j);
	printf("Hexa test %%-10x : %-10x \n", j);
	//ft_printf("Hexa test %%-10x : %-10x \n", j);
	printf("Hexa test %%010x : %010x \n", j);
	//ft_printf("Hexa test %%010x : %010x \n", j);
	printf("Hexa test %%30.15x : %30.15x \n", j);
	//ft_printf("Hexa test %%30.15x : %30.15x \n", j);
	printf("Hexa test %%30.16x : %30.16x \n", j);
	//ft_printf("Hexa test %%30.16x : %30.16x \n", j);
	printf("Hexa test %%30.17x : %30.17x \n", j);
	//ft_printf("Hexa test %%30.17x : %30.17x \n", j);
	printf("Hexa test %%30.18x : %30.18x \n", j);
	//ft_printf("Hexa test %%30.18x : %30.18x \n", j);
	printf("Hexa test %%*.17x (* is 30) : %*.17x \n", 30, j);
	//ft_printf("Hexa test %%*.17x (* is 30) : %*.17x \n", 30, j);
	printf("Hexa test %%30.*x (* is 17) : %30.*x \n", 17, j);
	//ft_printf("Hexa test %%30.*x (* is 17) : %30.*x \n", 17, j);
	printf("Hexa test %%*.*x (* is 30 and 17) : %*.*x \n", 30, 17, j);
	//ft_printf("Hexa test %%*.*x (* is 30 and 17) : %*.*x \n", 30, 17, j);
	printf("Hexa test %%*.*x (* is 30 and -17) : %*.*x \n", 30, -17, j);
	//ft_printf("Hexa test %%*.*x (* is 30 and -17) : %*.*x \n", 30, -17, j);
	printf("Hexa test %%*.*x (* is 30 and 40) : %*.*x \n", 30, 40, j);
	//ft_printf("Hexa test %%*.*x (* is 30 and 40) : %*.*x \n", 30, 40, j);


	printf("\n\n HEXA CAPSED TEST :\n\n");

	printf("Hexa test %%X : %X \n", j);
	//ft_printf("Hexa test %%X : %X \n", j);
	printf("Hexa test %%10X : %10X \n", j);
	//ft_printf("Hexa test %%10X : %10X \n", j);
	printf("Hexa test %%-10X : %-10X \n", j);
	//ft_printf("Hexa test %%-10X : %-10X \n", j);
	printf("Hexa test %%010X : %010X \n", j);
	//ft_printf("Hexa test %%010X : %010X \n", j);
	printf("Hexa test %%30.15X : %30.15X \n", j);
	//ft_printf("Hexa test %%30.15X : %30.15X \n", j);
	printf("Hexa test %%30.16X : %30.16X \n", j);
	//ft_printf("Hexa test %%30.16X : %30.16X \n", j);
	printf("Hexa test %%30.17X : %30.17X \n", j);
	//ft_printf("Hexa test %%30.17X : %30.17X \n", j);
	printf("Hexa test %%30.18X : %30.18X \n", j);
	//ft_printf("Hexa test %%30.18X : %30.18X \n", j);
	printf("Hexa test %%*.17X (* is 30) : %*.17X \n", 30, j);
	//ft_printf("Hexa test %%*.17X (* is 30) : %*.17X \n", 30, j);
	printf("Hexa test %%30.*X (* is 17) : %30.*X \n", 17, j);
	//ft_printf("Hexa test %%30.*X (* is 17) : %30.*X \n", 17, j);
	printf("Hexa test %%*.*X (* is 30 and 17) : %*.*X \n", 30, 17, j);
	//ft_printf("Hexa test %%*.*X (* is 30 and 17) : %*.*X \n", 30, 17, j);
	printf("Hexa test %%*.*X (* is 30 and -17) : %*.*X \n", 30, -17, j);
	//ft_printf("Hexa test %%*.*X (* is 30 and -17) : %*.*X \n", 30, -17, j);
	printf("Hexa test %%*.*X (* is 30 and 40) : %*.*X \n", 30, 40, j);
	//ft_printf("Hexa test %%*.*X (* is 30 and 40) : %*.*X \n", 30, 40, j);

	j = UINT_MAX;
	printf("Hexa test %%*.*X (* is 30 and 40) : %*.*X \n", 30, 40, j);
	//ft_printf("Hexa test %%*.*X (* is 30 and 40) : %*.*X \n", 30, 40, j);





	printf("\n\n UNSIGNED INTEGER TEST :\n\n");

printf("\nWITH J = 4123456789\n");
	j = 4123456789;

	printf("Unsigned int test %%u : %u \n", j);
	//ft_printf("Unsigned int test %%u : %u \n", j);
	printf("Unsigned int test %%10u : %10u \n", j);
	//ft_printf("Unsigned int test %%10u : %10u \n", j);
	printf("Unsigned int test %%-10u : %-10u \n", j);
	//ft_printf("Unsigned int test %%-10u : %-10u \n", j);
	printf("Unsigned int test %%010u : %010u \n", j);
	//ft_printf("Unsigned int test %%010u : %010u \n", j);
	printf("Unsigned int test %%30.15u : %30.15u \n", j);
	//ft_printf("Unsigned int test %%30.15u : %30.15u \n", j);
	printf("Unsigned int test %%30.16u : %30.16u \n", j);
	//ft_printf("Unsigned int test %%30.16u : %30.16u \n", j);
	printf("Unsigned int test %%30.17u : %30.17u \n", j);
	//ft_printf("Unsigned int test %%30.17u : %30.17u \n", j);
	printf("Unsigned int test %%30.18u : %30.18u \n", j);
	//ft_printf("Unsigned int test %%30.18u : %30.18u \n", j);
	printf("Unsigned int test %%*.17u (* is 30) : %*.17u \n", 30, j);
	//ft_printf("Unsigned int test %%*.17u (* is 30) : %*.17u \n", 30, j);
	printf("Unsigned int test %%30.*u (* is 17) : %30.*u \n", 17, j);
	//ft_printf("Unsigned int test %%30.*u (* is 17) : %30.*u \n", 17, j);
	printf("Unsigned int test %%*.*u (* is 30 and 17) : %*.*u \n", 30, 17, j);
	//ft_printf("Unsigned int test %%*.*u (* is 30 and 17) : %*.*u \n", 30, 17, j);
	printf("Unsigned int test %%*.*u (* is 30 and -17) : %*.*u \n", 30, -17, j);
	//ft_printf("Unsigned int test %%*.*u (* is 30 and -17) : %*.*u \n", 30, -17, j);
	printf("Unsigned int test %%*.*u (* is 30 and 40) : %*.*u \n", 30, 40, j);
	//ft_printf("Unsigned int test %%*.*u (* is 30 and 40) : %*.*u \n", 30, 40, j);

	printf("\nNOW WITH J = -4123456789\n");

	j = -4123456789;

	printf("Unsigned int test %%u : %u \n", j);
	//ft_printf("Unsigned int test %%u : %u \n", j);
	printf("Unsigned int test %%10u : %10u \n", j);
	//ft_printf("Unsigned int test %%10u : %10u \n", j);
	printf("Unsigned int test %%-10u : %-10u \n", j);
	//ft_printf("Unsigned int test %%-10u : %-10u \n", j);
	printf("Unsigned int test %%010u : %010u \n", j);
	//ft_printf("Unsigned int test %%010u : %010u \n", j);
	printf("Unsigned int test %%30.15u : %30.15u \n", j);
	//ft_printf("Unsigned int test %%30.15u : %30.15u \n", j);
	printf("Unsigned int test %%30.16u : %30.16u \n", j);
	//ft_printf("Unsigned int test %%30.16u : %30.16u \n", j);
	printf("Unsigned int test %%30.17u : %30.17u \n", j);
	//ft_printf("Unsigned int test %%30.17u : %30.17u \n", j);
	printf("Unsigned int test %%30.18u : %30.18u \n", j);
	//ft_printf("Unsigned int test %%30.18u : %30.18u \n", j);
	printf("Unsigned int test %%*.17u (* is 30) : %*.17u \n", 30, j);
	//ft_printf("Unsigned int test %%*.17u (* is 30) : %*.17u \n", 30, j);
	printf("Unsigned int test %%30.*u (* is 17) : %30.*u \n", 17, j);
	//ft_printf("Unsigned int test %%30.*u (* is 17) : %30.*u \n", 17, j);
	printf("Unsigned int test %%*.*u (* is 30 and 17) : %*.*u \n", 30, 17, j);
	//ft_printf("Unsigned int test %%*.*u (* is 30 and 17) : %*.*u \n", 30, 17, j);
	printf("Unsigned int test %%*.*u (* is 30 and -17) : %*.*u \n", 30, -17, j);
	//ft_printf("Unsigned int test %%*.*u (* is 30 and -17) : %*.*u \n", 30, -17, j);
	printf("Unsigned int test %%*.*u (* is 30 and 40) : %*.*u \n", 30, 40, j);
	//ft_printf("Unsigned int test %%*.*u (* is 30 and 40) : %*.*u \n", 30, 40, j);
    printf("%%s String (%%s, ''Hello world.''): ");
    printf("%s\n", "Hello world.");
    printf("%%p Pointer: (%%p, &var): ");
    printf("%p\n", &var);
    printf("%%d Decimal signed integer (%%d, -10): ");
    printf("%d\n", -10);
    printf("%%i Decimal signed integer will interpret number as hexadecimal if preceded by 0x and octal if preceded by 0 (%%d, -0x10): ");
    printf("%i\n", -0x10);
    printf("%%u Decimal unsigned int (%%u, 10): ");
    printf("%u\n", 10);
    printf("%%x Hexadecimal unsigned int in lower-case (%%x, 10): ");
    printf("%x\n", 10);
    printf("%%X Hexadecimal unsigned int in upper-case (%%X, 10): ");
    printf("%X\n", 10);

    //FLAGS
    printf("\n\nFLAGS:\n");
    printf("* Width field (%%*d, 5, 10): ");
    printf("%*d\n", 5, 10);
    printf("* Width field (%%3d, 10): ");
    printf("%3d\n\n", 10);
    printf(". Precision field (%%.5s, ''Hello world.''): ");
    printf("%.5s\n", "Hello world.");
    printf(". Precision field (%%-010.*s), 3, ''Hello world.''): ");
    printf("%-010.*s\n\n", 3, "Hello world.");
    printf("0 Prepends zeros for numeric types (%%-010i prout, 123456): ");
    printf("%-010i prout\n\n", 123456);
    printf("- Left align the output (%%20s, ''Hello world.''):\n");
    printf("%-20s\n\n", "Hello world.");
*/
    return (0);
}
