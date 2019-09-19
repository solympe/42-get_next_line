/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solympe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 10:50:52 by solympe           #+#    #+#             */
/*   Updated: 2019/09/14 10:30:04 by solympe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*td;
	const char	*ts;

	if (!dest && !src)
		return (NULL);
	td = dest;
	ts = src;
	while (n-- > 0)
		*td++ = *ts++;
	return (dest);
}
