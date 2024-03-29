/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: solympe <solympe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 13:20:58 by solympe           #+#    #+#             */
/*   Updated: 2019/09/18 17:07:02 by solympe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"

# include <unistd.h>
# include <fcntl.h>
# include <string.h>

int		get_next_line(const int fd, char **line);
int		ft_return_line(char **str, char **line, int fd);

# define BUFF_SIZE 4095

#endif
