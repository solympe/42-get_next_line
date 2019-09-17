/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solympe <solympe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 12:39:28 by solympe           #+#    #+#             */
/*   Updated: 2019/09/17 17:29:35 by solympe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	static char *str;
	int		ret;
	int 	i;
	char	buff[BUFF_SIZE + 1];

	i = -1;
	if (fd < 0 || !line)
		return (-1);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		if (!str)
			str = ft_strnew(1);
		else
		{
			printf("%s\n", "EXIST");
		}
	}
	str = ft_strjoin(str, buff);
	printf("%s\n", str);
	return (0);
}
