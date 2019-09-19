/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solympe <solympe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 17:52:34 by solympe           #+#    #+#             */
/*   Updated: 2019/09/16 12:25:10 by solympe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		clear_list(void *content, size_t content_size)
{
	if (content_size)
		free(content);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*saver;
	t_list		*newl;

	if (!lst || !f)
		return (NULL);
	newl = f(lst);
	if (lst == NULL)
		return (NULL);
	saver = newl;
	while (lst->next)
	{
		lst = lst->next;
		saver->next = f(lst);
		if (saver->next == NULL)
		{
			if (newl)
				ft_lstdel(&newl, clear_list);
			return (NULL);
		}
		saver = saver->next;
	}
	return (newl);
}
