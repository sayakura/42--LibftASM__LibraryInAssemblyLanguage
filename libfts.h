/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfts.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 22:15:59 by qpeng             #+#    #+#             */
/*   Updated: 2019/03/19 00:24:56 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTS
#define LIBFTS

int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isupper(int c);
int	  	ft_islower(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
int 	ft_puts(char *str);
int		ft_strlen(const char *s);
void	*ft_memset(void *b, int c, unsigned int len);
void	*ft_memcpy(void *restrict dst, const void *restrict src, unsigned int n);
char 	*ft_strdup(const char *s1);
#endif
