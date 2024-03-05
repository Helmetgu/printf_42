/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testcase.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlow <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:46:55 by mlow              #+#    #+#             */
/*   Updated: 2023/09/27 17:05:16 by mlow             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

//Test case
/*
int	main(void)
{
	char	format[] = "Char %c\n, str %s\n, hexpointer %p\n, digit %d & %i\n, unsigned decimal %u\n, lowercase %x\n, uppercase %X\n, %%\n";
	char	format2[] = "Char %c%c%c%c";
	char	format3[] = "string %s";
	char	format4[] = "Memory address %p";
	char	format5[] = "Digit %d, digit2 %i";
	char	format6[] = "Digit %u";
	char	format7[] = "hex %x, HEX %X";
	char	format8[] = "Print %%";
	char	*s6 = NULL;


	printf("Return value: %i\n", ft_printf(format2, 's', 'c', 'r', 't'));
	printf("Return value: %i\n", printf("Char %c%c%c%c", 's', 'c', 'r', 't'));
	printf("Return value: %i\n", ft_printf(format3, "This is a string"));
	printf("Return value: %i\n", printf("string %s", "This is a string"));
	printf("Return value: %i\n", ft_printf(format4, format5));
	printf("Return value: %i\n", printf("Memory address:%p", format5));
	printf("Return value: %i\n", ft_printf(format5, -12345, -12345));
	printf("Return value: %i\n", printf("Digit %d, digit2 %i", -12345, -12345));
	printf("Return value: %i\n", ft_printf(format6, 12345));
	printf("Return value: %i\n", printf("Digit %u", 12345));
	printf("Return value: %i\n", ft_printf(format7, 15151515, 15151515));
	printf("Return value: %i\n", printf("hex %x, HEX %X", 15151515, 15151515));
	printf("Return value: %i\n", ft_printf(format8));
	printf("Return value: %i\n", printf("Print %%"));
	ft_printf(format, 'c', "String", format4, -123, -123, 123, 15151515, 15151515);
	printf("Char %c\n, str %s\n, hexpointer %p\n, digit %d & %i\n, unsigned decimal %u\n, lowercase %x\n, uppercase %X\n, %%\n", 'c', "String", format4, -123, -123, 123, 15151515, 15151515);
	printf("Char %c\n, str %s\n, hexpointer %p\n, digit %d & %i\n, unsigned decimal %u\n, lowercase %x\n, uppercase %X\n, %%\n", 'c', s6, NULL, -123, -123, 123, 15151515, 15151515);
	return (0);
}
*/
//
/*
int	main(void)
{
	char	s1[] = "Lorem ipsum dolor sit amet, consectetur adipiscing";
	char	s2[] = "elit, sed do eiusmod tempor incididunt ut labore et";
	char	s3[] = "dolore magna aliqua. Ut enim ad minim veniam, quis";
	char	s4[] = "nostrud exercitation ullamco laboris nisi ut aliquip";
	char	s5[] = "ex ea commodo consequat.";
	char	*s6 = NULL;
	ft_printf("\nft_printf (string): \n");
	ft_printf("Return value: %i\n",
		ft_printf("%s %s %s %s %s\n%s\n", s1, s2, s3, s4, s5, s6));
	printf("\nOriginal printf (string): \n");
	printf("Return value: %i\n",
		printf("%s %s %s %s %s\n%s\n", s1, s2, s3, s4, s5, s6));
	ft_printf("\nft_printf (mix): \n");
	ft_printf("Return value: %i\n",
		ft_printf("%c%c%c%s%c%%%ctest%c%ctest\n",
		'a', '@', '\t', "&*?=^	!*#:3", '\n', '\v', ' ', '-'));
	printf("\nprintf (mix): \n");
	printf("Return value: %i\n",
		printf("%c%c%c%s%c%%%ctest%c%ctest\n",
		'a', '@', '\t', "&*?=^	!*#:3", '\n', '\v', ' ', '-'));
	ft_printf("\nft_printf (int): \n");
	ft_printf("Return value: %i\n",
		ft_printf("%i %d %i %d %i\n", 0, 1, 42, 999, INT_MIN));
	printf("\nOriginal printf (int): \n");
	printf("Return value: %i\n",
		printf("%i %d %i %d %i\n", 0, 1, 42, 999, INT_MIN));
	ft_printf("\nft_printf (unsigned int): \n");
	ft_printf("Return value: %i\n", ft_printf("%u %u %u %u %u %u\n",
		1, -1, UINT_MAX, 0, 4309, -90));
	printf("\nOriginal printf (unsigned int): \n");
	printf("Return value: %i\n", printf("%u %u %u %u %u %u\n",
		1, -1, UINT_MAX, 0, 4309, -90));
	ft_printf("\nft_printf (hexadecimal): \n");
	ft_printf("Return value: %i\n", ft_printf("%x %x %x %x %X %X %X %%\n",
		1, -1, 0, 100, 2048, INT_MIN, INT_MAX));
	printf("\nOriginal printf (hexadecimal): \n");
	printf("Return value: %i\n", printf("%x %x %x %x %X %X %X %%\n",
		1, -1, 0, 100, 2048, INT_MIN, INT_MAX));
	ft_printf("\nft_printf (pointer): \n");
	ft_printf("Return value: %i\n",
		ft_printf("%p %p %p %p %p %p\n", s1, s2, s3, s4, s5, NULL));
	printf("\nOriginal printf (pointer): \n");
	printf("Return value: %i\n",
		printf("%p %p %p %p %p %p\n", s1, s2, s3, s4, s5, NULL));
	return (0);
}
*/
//
// va_start will first go through "s" which due to
// va_arg, will go to the next one which is after "s".
//va_list is implemented as a POINTER to a structure.
// It holds information about the arguments passed to a 
// function that uses a variable number of arguments.
//We do not need to use * operator to indicate it is
// a pointer because the va_list type is already
// defined as a pointer type. "args" can be passed
// to functions like "va_start", "va_arg" & "va_end"
// to access individual arguments in the list.
