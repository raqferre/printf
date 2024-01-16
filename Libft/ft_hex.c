/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:50:36 by raqferre          #+#    #+#             */
/*   Updated: 2022/07/14 16:31:36 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

static int	ft_hexlen(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 16;
	}	
	return (len);
}

static void	ft_puthex(unsigned int n, const char s)
{
	if (n >= 16)
	{	
		ft_puthex(n / 16, s);
		ft_puthex(n % 16, s);
	}
	else
	{
		if (n <= 9)
			ft_putchar(n + 48);
		else
		{
			if (s == 'x')
				ft_putchar(n - 10 + 97);
			if (s == 'X')
				ft_putchar(n - 10 + 65);
		}
	}
}	

int	ft_hex_print(unsigned int n, const char s)
{
	if (n == 0)
		return (ft_putchar('0'));
	ft_puthex(n, s);
	return (ft_hexlen(n));
}	
