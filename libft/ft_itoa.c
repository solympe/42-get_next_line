/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solympe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 18:06:33 by solympe           #+#    #+#             */
/*   Updated: 2019/09/13 16:09:23 by solympe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	minus_symb(int *n, int *nt)
{
	if (*n < 0)
	{
		*n *= -1;
		*nt = 1;
	}
}

char		*ft_itoa(int n)
{
	int		tmpn;
	int		len;
	int		nt;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	tmpn = n;
	len = 2;
	nt = 0;
	minus_symb(&n, &nt);
	while (tmpn /= 10)
		len++;
	len += nt;
	if (!(str = (char*)malloc(sizeof(char) * len)))
		return (NULL);
	str[--len] = '\0';
	while (len--)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
	}
	if (nt)
		str[0] = '-';
	return (str);
}
