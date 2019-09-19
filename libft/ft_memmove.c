/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solympe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 11:25:19 by solympe           #+#    #+#             */
/*   Updated: 2019/09/14 10:30:04 by solympe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*td;
	const unsigned char	*ts;
	size_t				i;

	td = (unsigned char*)dest;
	ts = (unsigned char*)src;
	i = 0;
	if (td == NULL && ts == NULL)
		return (NULL);
	if (ts < td)
	{
		while (++i <= n)
			td[n - i] = ts[n - i];
	}
	else
		while (n-- > 0)
			*(td++) = *(ts++);
	return (dest);
}
