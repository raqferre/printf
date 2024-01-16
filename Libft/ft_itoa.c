/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:38:02 by raqferre          #+#    #+#             */
/*   Updated: 2022/07/12 12:43:40 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_nbrlen(long n)
{
	size_t	x;

	x = 1;
	if (n < 0)
	{
		n = n * -1;
			x++;
	}
	while (n >= 10)
	{
		n = n / 10;
		x++;
	}
	return (x);
}

static char	*ft_write_nbr(long nbr, char *res)
{
	size_t	i;
	size_t	lenght;

	i = 1;
	lenght = ft_nbrlen(nbr);
	if (nbr == 0)
		res[0] = 48;
	if (nbr < 0)
	{	
		res[0] = '-';
		nbr = nbr * -1;
	}
	while (i <= lenght)
	{
		if (nbr)
		{
			res[lenght - i] = nbr % 10 + 48;
			nbr = nbr / 10;
		}
		i++;
	}	
	return (res);
}	

char	*ft_itoa(long n)

{
	char	*res;
	int		lenght;

	lenght = ft_nbrlen(n);
	res = (char *) ft_calloc((lenght +1), sizeof(char));
	if (res == NULL)
		return (NULL);
	res = ft_write_nbr(n, res);
	return (res);
}
