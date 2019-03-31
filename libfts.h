/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfts.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 22:15:59 by qpeng             #+#    #+#             */
/*   Updated: 2019/03/31 04:03:55 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTS
#define LIBFTS

int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isupper(int c);
int	  	ft_islower(int c);
char 	ft_tolower(int c);
char 	ft_toupper(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
int 	ft_puts(char *str);
int		ft_strlen(const char *s);
void	*ft_memset(void *b, int c, unsigned int len);
void	*ft_memcpy(void *restrict dst, const void *restrict src, unsigned int n);
char 	*ft_strdup(const char *s1);
void	ft_cat(int fd);
void	ft_bzero(void *s, unsigned int n);
char	*ft_strcat(char *restrict s1, const char *restrict s2);
int     ft_strcmp(const char *s1, const char *s2);
int     ft_strncmp(const char *s1, const char *s2, unsigned int size);
char    *ft_strchr(const char *s, int c);
int     ft_putchar(int c);
#endif
