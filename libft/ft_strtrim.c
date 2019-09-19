/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solympe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 13:21:33 by solympe           #+#    #+#             */
/*   Updated: 2019/09/12 17:14:33 by solympe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_return(char const *s, int i, int j, int z)
{
	char	*tmp;

	tmp = ft_strnew(i - j + 1);
	if (!tmp)
		return (NULL);
	while (j <= i)
	{
		tmp[z] = s[j];
		j++;
		z++;
	}
	return (tmp);
}

char		*ft_strtrim(char const *s)
{
	char	*tmp;
	size_t	i;
	size_t	j;
	size_t	z;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	j = 0;
	z = 0;
	while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
		j++;
	if (!*s || !s[j])
		return (ft_strnew(0));
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '\0')
		i--;
	tmp = ft_return(s, i, j, z);
	return (tmp);
}
