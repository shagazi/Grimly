/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <shagazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 02:36:18 by shagazi           #+#    #+#             */
/*   Updated: 2018/04/10 14:12:49 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		return_line(char **file, char **line)
{
	char	*tmp;
	int		i;

	i = 0;
	if (*file == '\0')
		return (0);
	if (ft_strchr(*file, '\n') != NULL)
	{
		*(ft_strchr(*file, '\n')) = '\0';
		*line = ft_strdup(*file);
		tmp = ft_strdup((ft_strchr(*file, '\0') + 1));
		free(*file);
		*file = ft_strdup(tmp);
		free(tmp);
	}
	else
	{
		*line = ft_strdup(*file);
		ft_memdel((void**)file);
		if (**line == '\0')
			return (0);
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static char	*file[FDLIM];
	char		buffer[BUFF_SIZE + 1];
	char		*tmp;
	int			bytesread;

	if (fd < 0 || !line || read(fd, buffer, 0) < 0)
		return (-1);
	if (!(file[fd]))
		file[fd] = ft_strnew(0);
	while (ft_strchr(file[fd], '\n') == NULL)
	{
		bytesread = read(fd, buffer, BUFF_SIZE);
		buffer[bytesread] = '\0';
		if (bytesread == 0)
			break ;
		tmp = ft_strjoin(file[fd], buffer);
		free(file[fd]);
		file[fd] = tmp;
	}
	return (return_line(&file[fd], line));
}
