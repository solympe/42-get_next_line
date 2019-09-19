/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strenqu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solympe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:25:26 by solympe           #+#    #+#             */
/*   Updated: 2019/09/16 11:00:54 by solympe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!s1 || !s2)
		return (0);
	if ((!*s1 && !*s2) || n == 0)
		return (1);
	while (*s1 == *s2 && n--)
		if (*s1++ == *s2++ && n == 0)
			return (1);
	return (0);
}