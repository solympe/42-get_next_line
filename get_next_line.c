/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solympe <solympe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 12:39:28 by solympe           #+#    #+#             */
/*   Updated: 2019/09/18 16:24:22 by solympe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			ft_return_line(char **str, char **line, int fd)
{
	char	*tmp;
	int 	i;

	i = 0;
	while (str[fd][i] != '\n' && str[fd][i] != '\0')
		i++;
	if (str[fd][i] == '\n')
	{
		*line = ft_strsub(str[fd], 0, i);
		tmp = ft_strdup(str[fd] + i + 1);
		free(str[fd]);
		str[fd] = tmp;
		if (str[fd][0] == '\0')
			ft_strdel(&str[fd]);
	}
	else
	{
		*line = ft_strdup(str[fd]);
		ft_strdel(&str[fd]);
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static char	*str[255];
	char 		*tmp;
	int			status;
	char		buff[BUFF_SIZE + 1];

	if (fd < 0 || !line)
		return (-1);
	while ((status = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[status] = '\0';
		if (!str[fd])
			str[fd] = ft_strnew(1);
		tmp = ft_strjoin(str[fd], buff);
		free(str[fd]);
		str[fd] = tmp;
		if (ft_strchr(buff, '\n'))
			break ;
	}
	if (status < 0)
		return (-1);
	else if (status == 0 && (str[fd] == NULL || str[fd][0] == '\0'))
		return (0);
	return (ft_return_line(str, line, fd));
}
