/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 22:16:10 by qpeng             #+#    #+#             */
/*   Updated: 2019/03/18 06:44:09 by qpeng            ###   ########.fr       */
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
	printf("\e[32m------------------------------------------------------\e[0m\n");
}

int		main(void)
{
	printf("%sft_strlen: %s\n", MAGENTA, RESET);
	printf("str: [%s] len: %d\n", "123", ft_strlen("123"));
	printf("str: [%s] len: %d\n", "", ft_strlen(""));
	printf("str: [%s] len: %d\n", "T@Y^ U*$WNYNB", ft_strlen("T@Y^ U*$WNYNB"));
	ln();
	printf("%sft_isascii: %s\n", MAGENTA, RESET);
	printf("char: [%d] ret: %d\n", 0, ft_isascii(0));
	printf("char: [%d] ret: %d\n", 1, ft_isascii(1));
	printf("char: [%d] ret: %d\n", 127, ft_isascii(127));
	printf("char: [%d] ret: %d\n", 128, ft_isascii(128));
	ln();
	printf("%sft_isdigit: %s\n", MAGENTA, RESET);
	printf("char: [%d] ret: %d\n", 0, ft_isdigit(0));
	printf("char: [%d] ret: %d\n", 1, ft_isdigit(1));
	printf("char: [%d] ret: %d\n", '1', ft_isdigit('1'));
	printf("char: [%d] ret: %d\n", '9', ft_isdigit('9'));
	printf("char: [%d] ret: %d\n", 127, ft_isdigit(127));
	printf("char: [%d] ret: %d\n", 128, ft_isdigit(128));
	return (0);
}
