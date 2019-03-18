/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 22:16:10 by qpeng             #+#    #+#             */
/*   Updated: 2019/03/18 06:05:43 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfts.h"
#include <stdio.h>
#include <string.h>

void ln()
{
	printf("\e[32m------------------------------------------------------\e[0m\n");
}

int		main(void)
{
	printf("ft_strlen: \n");
	printf("str: [%s] len: %d\n", "123", ft_strlen("123"));
	printf("str: [%s] len: %d\n", "", ft_strlen(""));
	ln();
	printf("ft_isascii: \n");
	printf("char: [%d] ret: %d\n", 0, ft_isascii(0));
	printf("char: [%d] ret: %d\n", 1, ft_isascii(1));
	printf("char: [%d] ret: %d\n", 127, ft_isascii(127));
	printf("char: [%d] ret: %d\n", 128, ft_isascii(128));
	return (0);
}
