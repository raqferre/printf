/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:03:36 by raqferre          #+#    #+#             */
/*   Updated: 2022/07/14 16:25:05 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printf_arg(const char *s, int i, va_list args)
{	
	if (s[i +1] == '%')
		return (ft_putchar('%'));
	else if (s[i +1] == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (s[i +1] == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (s[i +1] == 'd' || s[i +1] == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (s[i +1] == 'u')
		return (putnbr_u(va_arg (args, unsigned int)));
	else if (s[i +1] == 'x' || s[i +1] == 'X')
		return (ft_hex_print(va_arg(args, unsigned int), s[i +1]));
	else if (s[i +1] == 'p')
		return (ft_ptr_print(va_arg(args, unsigned long long)));
	else
		return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		out;
	int		i;

	out = 0;
	i = 0;
	va_start (args, s);
	while (s[i])
	{	
		if (s[i] == '%' && ft_strchr("cspdiuxX%", s[i + 1]))
		{	
			out = out + ft_printf_arg (s, i, args);
			i++;
		}	
		else
			out += ft_putchar(s[i]);
	i++;
	}
	va_end (args);
	return (out);
}
