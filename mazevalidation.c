/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Geniusshit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <shagazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 22:35:04 by shagazi           #+#    #+#             */
/*   Updated: 2018/04/14 00:20:20 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myheadergrimly.h"

static int		char_check(char **line)
{
	int i;
	i = 0;
	while(*line[i] != '\0')
	{
		if (*line[i]!= '*' || *line[i]!= ' '
		|| *line[i]!= '1' || *line[i]!= '2')
			i++;
		else
		{
			ft_putstr("MAPERROR");
			return(0);
		}
	}
	return (1);
}

static char *nl(char **file, char **line)
{
	char *tmp;

	*(ft_strchr(*file, '\n')) = '\0';
	tmp = *file;
	*(ft_strchr(tmp, '\0')) = '\n';
	*line = ft_strdup(tmp);
	return (*line);

}

static int elsereplace(char **file, char **line)
{
	*line = ft_strdup(*file);
	ft_memdel((void**)file);
	if (**line == '\0')
		return (0);
	return(1);
}

int		return_line(char **file, char **line)
{
	char	*tmp;
	int		i;

	i = 0;
	if (*file == '\0')
		return (0);
	if (ft_strchr(*file, '\n') != NULL)
	{
		*line = nl(file, line);
		if (i > 1)
		{
			if(char_check(line) == 0)
				return(0);
		}
		i++;
		tmp = ft_strdup((ft_strchr(*file, '\n') + 1));
		free(*file);
		*file = ft_strdup(tmp);
		free(tmp);
	}
	else
		if(elsereplace(file, line) == 0)
			return (0);
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
