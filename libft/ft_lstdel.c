/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solympe <solympe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 16:06:43 by solympe           #+#    #+#             */
/*   Updated: 2019/09/14 18:16:36 by solympe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;

	if (!alst || !*alst || !del)
		return ;
	list = *alst;
	while (*alst != NULL)
	{
		list = (*alst)->next;
		del(*alst, (*alst)->content_size);
		*alst = list;
	}
}
