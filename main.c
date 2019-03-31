/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 22:16:10 by qpeng             #+#    #+#             */
/*   Updated: 2019/03/31 04:33:32 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfts.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

# define RED     "\x1b[31m"
# define GREEN   "\x1b[32m"
# define YELLOW  "\x1b[33m"
# define BLUE    "\x1b[34m"
# define MAGENTA "\x1b[35m"
# define CYAN    "\x1b[36m"
# define BLACK   "\033[0;90m"
# define RESET   "\x1b[0m"
# define GO_UP   "\033[F"

int     ft_strncmp(const char *s1, const char *s2, unsigned int size);
void ln()
{
	printf("\n\e[32m---------------------------------------------------------\e[0m\n");
}

int		main(void)
{
	printf("%d\n", ft_strncmp("123", "12a", 3));
	// static char str[300];

	// printf("%sft_strlen: %s\n", MAGENTA, RESET);
	// printf("str: [%s] len: %d\n", "123", ft_strlen("123"));
	// printf("str: [%s] len: %d\n", "", ft_strlen(""));
	// printf("str: [%s] len: %d\n", "T@Y^ U*$WNYNB", ft_strlen("T@Y^ U*$WNYNB"));
	// ln();
	// printf("%sft_isascii: %s\n", MAGENTA, RESET);
	// for (int i = 32;  i < 127; i++)
	// {
	// 	sprintf(str, "char: [%c] ret: %d", i, ft_isascii(i));
	// 	printf("%-40s", str);
	// 	if (i & 1)
	// 		printf("\n");
	// }
	// ln();
	// printf("%sft_isdigit: %s\n", MAGENTA, RESET);
	// for (int i = 32;  i < 127; i++)
	// {
	// 	sprintf(str, "char: [%c] ret: %d", i, ft_isdigit(i));
	// 	printf("%-40s", str);
	// 	if (i & 1)
	// 		printf("\n");
	// }
	// ln();
	// printf("%sft_isupper: %s\n", MAGENTA, RESET);
	// for (int i = 32;  i < 127; i++)
	// {
	// 	sprintf(str, "char: [%c] ret: %d", i, ft_isupper(i));
	// 	printf("%-40s", str);
	// 	if (i & 1)
	// 		printf("\n");
	// }
	// ln();
	// printf("%sft_islower: %s\n", MAGENTA, RESET);
	// for (int i = 32;  i < 127; i++)
	// {
	// 	sprintf(str, "char: [%c] ret: %d", i, ft_islower(i));
	// 	printf("%-40s", str);
	// 	if (i & 1)
	// 		printf("\n");
	// }
	// ln();
	// printf("%sft_tolower: %s\n", MAGENTA, RESET);
	// for (int i = 32;  i < 127; i++)
	// {
	// 	sprintf(str, "char: [%c] ret: %c", i, ft_tolower(i));
	// 	printf("%-40s", str);
	// 	if (i & 1)
	// 		printf("\n");
	// }
	// ln();
	// printf("%sft_toupper: %s\n", MAGENTA, RESET);
	// for (int i = 32;  i < 127; i++)
	// {
	// 	sprintf(str, "char: [%c] ret: %c", i, ft_toupper(i));
	// 	printf("%-40s", str);
	// 	if (i & 1)
	// 		printf("\n");
	// }
	// ln();
	// printf("%sft_isalpha: %s\n", MAGENTA, RESET);
	// for (int i = 32;  i < 127; i++)
	// {
	// 	sprintf(str, "char: [%c] ret: %d", i, ft_isalpha(i));
	// 	printf("%-40s", str);
	// 	if (i & 1)
	// 		printf("\n");
	// }

	// ln();
	// printf("%sft_isalnum: %s\n", MAGENTA, RESET);
	// for (int i = 32;  i < 127; i++)
	// {
	// 	sprintf(str, "char: [%c] ret: %d", i, ft_isalnum(i));
	// 	printf("%-40s", str);
	// 	if (i & 1)
	// 		printf("\n");
	// }

	// ln();
	// printf("%sft_isprint: %s\n", MAGENTA, RESET);
	// sprintf(str, "char: [%c] ret: %d", 31, ft_isprint(31));
	// printf("%-40s\n", str);
	// for (int i = 32;  i < 127; i++)
	// {
	// 	sprintf(str, "char: [%c] ret: %d", i, ft_isprint(i));
	// 	printf("%-40s", str);
	// 	if (i & 1)
	// 		printf("\n");
	// }
	// sprintf(str, "char: [%c] ret: %d", 128, ft_isprint(128));
	// printf("%-40s\n", str);
	// sprintf(str, "char: [%c] ret: %d", 129, ft_isprint(129));
	// printf("%-40s", str);

	// ln();
	// printf("%sft_puts: %s\n", MAGENTA, RESET);
	// printf("null string: \n");
	// ft_puts("");
	// printf("1. : \n");
	// ft_puts("To support DAX in your block driver, implement the 'direct_access'.");
	// printf("2. : \n");
	// printf("ret: %d\n", ft_puts("In order to support this method, the storage must be byte-accessible by. "));

	// ln();
	// printf("%sft_memset: %s\n", MAGENTA, RESET);
	// char mem[10] = "123456789\0";
	// printf("Before ft_memset: %s\n", mem);
	// ft_memset(mem, 'a', 9);
	// printf("After  ft_memset 9: %s\n", mem);
	// ft_memset(mem, 'x', 3);
	// printf("After  ft_memset 3: %s\n", mem);
	// ln();
	// printf("%sft_memcpy: %s\n", MAGENTA, RESET);
	// char mem2[10] = "123456789\0";
	// printf("before ft_memcpy 10:  %s\n", mem2);
	// ft_memcpy(mem2, "abcdefghi\0", 10);
	// printf("After  ft_memcpy 10:  %s\n", mem2);
	// ft_memcpy(mem2, "123", 3);
	// printf("After  ft_memcpy 3:   %s\n", mem2);
	// ft_memcpy(mem2, "123", 0);
	// printf("After  ft_memcpy 0:   %s\n", mem2);
	// ft_memcpy(mem2, "000000000", 10);
	// printf("After  ft_memcpy 0:   %s\n", mem2);
	// ln();
	// printf("%sft_strdup: %s\n", MAGENTA, RESET);
	// char *temp =  ft_strdup("123123123123\n\0");
	// printf("ft_strdup: %s", temp);
	// free(temp);
	// char *temp2 =  ft_strdup("aaaaaa\n\0");
	// printf("ft_strdup: %s", temp2);
	// free(temp2);
	// ln();
	// printf("%sft_cat on file libfts.h: %s\n", MAGENTA, RESET);
	// int fd = open("libfts.h", O_RDONLY);
	// ft_cat(fd);
	// close(fd);
	// ln();
	// printf("%sft_strcat: %s\n", MAGENTA, RESET);
	// char src[50], dest[50];
	// ft_bzero(src, 50);
	// ft_bzero(dest, 50);
	// strcpy(src,  "thatthatthatz");
	// strcpy(dest, "this a string");
	// ft_strcat(dest, src);
	// printf("Final destination string : |%s|\n", dest);
	// char src1[50], dest1[50];
	// ft_bzero(src1, 50);
	// ft_bzero(dest1, 50);
	// strcpy(src1,  "thatthatthatz");
	// strcpy(dest1, "this a string");
	// strcat(dest1, src1);
	// printf("Final destination string : |%s|\n", dest1);
	// ln();
	// printf("%sft_strcmp: %s\n", MAGENTA, RESET);

	// printf("ret: %d, str1: [%s], str2: [%s]\n", ft_strcmp("", "AAA"), "", "AAA");
	// printf("ret: %d, str1: [%s], str2: [%s]\n", ft_strcmp("AAA", ""), "AAA", "");
	// printf("ret: %d, str1: [%s], str2: [%s]\n", ft_strcmp("AAA", "AAB"), "AAA", "AAB");
	// const char *strcmp1 = "123";
	// const char *strcmp2 = "12";
	// printf("ret: %d, str1: [%s], str2: [%s]\n", ft_strcmp(strcmp1, strcmp2), strcmp1, strcmp2);
	// //printf("ret: %d, str1: [%s], str2: [%s]\n", strcmp(strcmp1, strcmp2), strcmp1, strcmp2);
	// const char *strcmp3 = "12";
	// const char *strcmp4 = "12";
	// printf("ret: %d, str1: [%s], str2: [%s]\n", ft_strcmp(strcmp3, strcmp4), strcmp3, strcmp4);
	// //printf("ret: %d, str1: [%s], str2: [%s]\n", strcmp(strcmp3, strcmp4), strcmp3, strcmp4);
	// const char *strcmp5 = "12";
	// const char *strcmp6 = "123";
	// printf("ret: %d, str1: [%s], str2: [%s]\n", ft_strcmp(strcmp5, strcmp6), strcmp5, strcmp6);
	// //printf("ret: %d, str1: [%s], str2: [%s]\n", strcmp(strcmp5, strcmp6), strcmp5, strcmp6);
	// const char *null1 = "";
	// const char *null2 = "";
	// printf("ret: %d, str1: [%s], str2: [%s]\n", ft_strcmp(null1, null2), null1, null2);
	// //printf("ret: %d, str1: [%s], str2: [%s]\n", strcmp(null1, null2), null1, null2);
	
	// ln();
	// printf("%sft_strchr: %s\n", MAGENTA, RESET);
	// const char *zz = "The strchr() function locates the first occurrence of c";
	// int c = 'f';
	// printf("str: %s, char: %c\n", zz, c);
	// printf("ret: %s\n", ft_strchr(zz, c));
	// c = '\0';
	// printf("str: %s, char: %c\n", zz, c);
	// printf("ret: %s\n", ft_strchr(zz, c));
	// c = 122;
	// printf("str: %s, char: %c\n", zz, c);
	// printf("ret: %s\n", ft_strchr(zz, c));
	// ln();
	// printf("%sft_putchar: %s\n", MAGENTA, RESET);
	// int ch = 'a';
	// printf("\nret: %c\n", ft_putchar(ch));
	// ft_putchar('\n');
	// ft_putchar('f');
	// ft_putchar('\n');
	// ft_putchar('\0');
	// ft_putchar('\n');
	return (0);
}
