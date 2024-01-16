/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 12:30:22 by raqferre          #+#    #+#             */
/*   Updated: 2022/06/24 12:26:48 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{		
		if (*str == (char) c)
			return ((char *)str);
			str++;
	}	
	if (*str == (char) c)
		return ((char *) str);
	return (0);
}
