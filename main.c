/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solympe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 14:27:09 by solympe           #+#    #+#             */
/*   Updated: 2019/09/18 16:25:28 by solympe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main()
{
	int		fd;
	char	*line[4000];
	int		i;

	fd = open("text", O_RDONLY);
	i = get_next_line(fd,line);
	printf("%d\n", i);
	printf("%s\n", "--------------------------------------------------");
	i = get_next_line(fd,line);
	printf("%d\n", i);
	printf("%s\n", "--------------------------------------------------");
	i = get_next_line(fd,line);
	printf("%d\n", i);
	return (0);
}
