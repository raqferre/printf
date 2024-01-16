/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:48:30 by raqferre          #+#    #+#             */
/*   Updated: 2022/07/14 16:48:13 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/*
** -.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-
**                              HEADERS
*/
# include <unistd.h>
# include <stdlib.h>
/* -.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-
**                              FUNCTION PROTOTYPES
*/
size_t			ft_strlen(const char *s);
char			*ft_strchr(const char *s, int c);
int				ft_putchar(char c);
int				ft_putstr(char *s);
int				ft_putnbr(int n);
int				ft_atoi(const char *str);
char			*ft_itoa(long n);
int				ft_hex_print(unsigned int n, const char s);
int				putnbr_u(unsigned int n);
void			*ft_calloc(size_t nmemb, size_t size);
void			ft_bzero(void *s,	size_t n);
int				ft_ptr_print(unsigned long long n);
#endif
