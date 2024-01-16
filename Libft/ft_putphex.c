/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putphex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:29:27 by raqferre          #+#    #+#             */
/*   Updated: 2022/07/14 16:42:59 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

static int	ft_len(uintptr_t n)
{
	int	len;

	len = 0;
	while (n)
	{
		len++;
		n = n / 16;
	}
	return (len);
}

static void	ft_putptr(uintptr_t n)
{
	if (n >= 16)
	{
		ft_putptr(n / 16);
		ft_putptr(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_putchar(n + 48);
		else
			ft_putchar(n - 10 + 97);
	}
}

int	ft_ptr_print(unsigned long long n)
{
	int	ptr;

	if (n == 0)
		return (write(1, "0x0", 3));
	ptr = write (1, "0x", 2);
	ft_putptr(n);
	ptr += ft_len(n);
	return (ptr);
}
