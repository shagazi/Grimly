/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Geniusshit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <shagazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 22:35:04 by shagazi           #+#    #+#             */
/*   Updated: 2018/04/13 01:22:45 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grimly.h"

char charcheck(char *buf, int *count)
{
	if (&count > 0 && (*buf != '*' || *buf != ' '
	|| *buf != '1' || *buf != '2'))
		return(*buf);
	else
	{
		ft_putstr("MAPERROR");
		return(0);
	}
}

static int newline(char *buf, int *ret, int *count)
{
	if (*buf == '\n' || ret == 0)
	{
		count++;
		return (1);
	}
	return (0);
}

int		checkfd(const int fd)
{
	char *buffer[1];

	if (fd < 0 || read(fd, buffer, 0) < 0)
		return (-1);
	else
		return (1);
}

char	*get_line(const int fd)
{
	char	*buf;
	int		ret;
	char	*tmp;
	static int 	count;
	char 	*line;

	line = ft_strnew(0);
	buf = ft_strnew(0);
	while ((ret = read(fd, buf, !!BUFF_SIZE)))
	{
		if(newline(buf, &ret, &count))
		{
			tmp = line;
			line = ft_strjoin(tmp, buf);
			buf = ft_strdup(ft_strchr(buf, '\n') + 1);
			ft_strdel(&tmp);
			break ;
		}
		*buf = charcheck(buf, &count);
		tmp = line;
		line = ft_strjoin(tmp, buf);
		ft_strdel(&tmp);
	}
	ft_strdel(&buf);
	return((ret == 0) ? 0 : line);
}
