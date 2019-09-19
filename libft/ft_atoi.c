/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solympe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 16:21:26 by solympe           #+#    #+#             */
/*   Updated: 2019/09/16 10:35:24 by solympe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	return_atoi(const char *nptr, int i, int checker, int space)
{
	long long int	res;
	long long int	pow;
	int				a;

	pow = 1;
	a = 0;
	res = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
		i++;
	i--;
	while (i >= 0 && nptr[i] != '+' && nptr[i] != '-' && i >= space)
	{
		res += (nptr[i] - '0') * pow;
		a++;
		i--;
		pow *= 10;
	}
	if (checker != 0)
		res *= -1;
	if (a >= 18 && res < 0 && checker != 1)
		return (-1);
	if (a >= 18 && res > 0 && checker != 0)
		return (0);
	return (res);
}

int			ft_atoi(const char *nptr)
{
	int		i;
	int		checker;
	int		space;

	checker = 0;
	i = 0;
	space = 0;
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\v'
	|| nptr[i] == '\f' || nptr[i] == '\r' || nptr[i] == '\n')
	{
		i++;
		space++;
	}
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			checker = 1;
		i++;
	}
	while (nptr[space] == '0')
		space++;
	return (return_atoi(nptr, i, checker, space));
}
