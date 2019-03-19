/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 22:16:10 by qpeng             #+#    #+#             */
/*   Updated: 2019/03/18 23:17:12 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfts.h"
#include <stdio.h>
#include <string.h>
# define RED     "\x1b[31m"
# define GREEN   "\x1b[32m"
# define YELLOW  "\x1b[33m"
# define BLUE    "\x1b[34m"
# define MAGENTA "\x1b[35m"
# define CYAN    "\x1b[36m"
# define BLACK   "\033[0;90m"
# define RESET   "\x1b[0m"
# define GO_UP   "\033[F"

void ln()
{
	printf("\n\e[32m---------------------------------------------------------\e[0m\n");
}

int		main(void)
{
	static char str[300];

	printf("%sft_strlen: %s\n", MAGENTA, RESET);
	printf("str: [%s] len: %d\n", "123", ft_strlen("123"));
	printf("str: [%s] len: %d\n", "", ft_strlen(""));
	printf("str: [%s] len: %d\n", "T@Y^ U*$WNYNB", ft_strlen("T@Y^ U*$WNYNB"));
	ln();
	printf("%sft_isascii: %s\n", MAGENTA, RESET);
	for (int i = 32;  i < 127; i++)
	{
		sprintf(str, "char: [%c] ret: %d", i, ft_isascii(i));
		printf("%-40s", str);
		if (i & 1)
			printf("\n");
	}
	ln();
	printf("%sft_isdigit: %s\n", MAGENTA, RESET);
	for (int i = 32;  i < 127; i++)
	{
		sprintf(str, "char: [%c] ret: %d", i, ft_isdigit(i));
		printf("%-40s", str);
		if (i & 1)
			printf("\n");
	}
	ln();
	printf("%sft_isupper: %s\n", MAGENTA, RESET);
	for (int i = 32;  i < 127; i++)
	{
		sprintf(str, "char: [%c] ret: %d", i, ft_isupper(i));
		printf("%-40s", str);
		if (i & 1)
			printf("\n");
	}
	ln();
	printf("%sft_islower: %s\n", MAGENTA, RESET);
	for (int i = 32;  i < 127; i++)
	{
		sprintf(str, "char: [%c] ret: %d", i, ft_islower(i));
		printf("%-40s", str);
		if (i & 1)
			printf("\n");
	}
	ln();
	printf("%sft_isalpha: %s\n", MAGENTA, RESET);
	for (int i = 32;  i < 127; i++)
	{
		sprintf(str, "char: [%c] ret: %d", i, ft_isalpha(i));
		printf("%-40s", str);
		if (i & 1)
			printf("\n");
	}
	ln();
	printf("%sft_isalnum: %s\n", MAGENTA, RESET);
	for (int i = 32;  i < 127; i++)
	{
		sprintf(str, "char: [%c] ret: %d", i, ft_isalnum(i));
		printf("%-40s", str);
		if (i & 1)
			printf("\n");
	}

	ln();
	printf("%sft_puts: %s\n", MAGENTA, RESET);
	printf("null string: \n");
	ft_puts("");
	printf("1. : \n");
	ft_puts("To support DAX in your block driver, implement the 'direct_access'.");
	printf("2. : \n");
	printf("ret: %d\n", ft_puts("In order to support this method, the storage must be byte-accessible by. "));

	ln();
	printf("%sft_memset: %s\n", MAGENTA, RESET);
	char mem[10] = "123456789\0";
	printf("Before ft_memset: %s\n", mem);
	ft_memset(mem, 'a', 9);
	printf("After  ft_memset 9: %s\n", mem);
	ft_memset(mem, 'x', 3);
	printf("After  ft_memset 3: %s\n", mem);
	ln();
	printf("%sft_memcpy: %s\n", MAGENTA, RESET);
	char mem2[10] = "123456789\0";
	printf("before ft_memcpy 10:  %s\n", mem2);
	ft_memcpy(mem2, "abcdefghi\0", 10);
	printf("After  ft_memcpy 10:  %s\n", mem2);
	ft_memcpy(mem2, "123", 3);
	printf("After  ft_memcpy 3:   %s\n", mem2);
	ft_memcpy(mem2, "123", 0);
	printf("After  ft_memcpy 0:   %s\n", mem2);
	return (0);
}
