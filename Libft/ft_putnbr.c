/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:42:54 by raqferre          #+#    #+#             */
/*   Updated: 2022/07/14 16:35:56 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int n)
{
	char	*str;
	long	x;
	int		len;

	x = (long) n;
	str = ft_itoa (x);
	ft_putstr(str);
	len = ft_strlen(str);
	free(str);
	return (len);
}	
