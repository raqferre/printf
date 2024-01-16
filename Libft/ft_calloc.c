/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:24:03 by raqferre          #+#    #+#             */
/*   Updated: 2022/07/08 10:44:52 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)

{
	void	*rtr;

	if (nmemb == 0 | size == 0)
	{
		nmemb = 1;
		size = 1;
	}	
	rtr = malloc (nmemb * size);
	if (!rtr)
		return (NULL);
	if (rtr)
		ft_bzero (rtr, nmemb * size);
	return (rtr);
}
