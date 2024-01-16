/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:58:36 by raqferre          #+#    #+#             */
/*   Updated: 2022/07/14 16:37:58 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	putnbr_u(unsigned int n)
{
	long	nbr;
	char	*str;
	int		len;

	nbr = (long) n;
	str = ft_itoa(nbr);
	ft_putstr(str);
	len = ft_strlen(str);
	free (str);
	return (len);
}	
