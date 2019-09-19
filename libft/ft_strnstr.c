/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solympe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 15:52:43 by solympe           #+#    #+#             */
/*   Updated: 2019/09/15 14:52:53 by solympe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	size_t	saver;

	i = 0;
	j = 0;
	if ((ft_strlen(needle) == 0 && ft_strlen(haystack) == 0)
		|| (ft_strlen(needle) == 0))
		return ((char *)haystack);
	while (haystack[i] && len)
	{
		j = 0;
		saver = len;
		while (needle[j] == haystack[i + j] && len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
			len--;
		}
		len = saver;
		i++;
		len--;
	}
	return (NULL);
}
