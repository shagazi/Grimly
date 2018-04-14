/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filevalidation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <shagazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 20:07:25 by shagazi           #+#    #+#             */
/*   Updated: 2018/04/12 03:04:46 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "grimly.h"
//
// char 	skipfirstline(char **file)
// {
// 	*file = ft_strdup(ft_strchr(*file, '\n') + 1);
// 	return(**file);
// }
//
// char		return_line(char **file, char **line, count)
// {
// 	int		i;
// 	char 	*tmp;
//
// 	i = 0;
// 	if (*file == '\0')
// 		return (0);
// 	if (count == 1)
// 		return(**file);
// 	while(*file[i] != '\n')
// 	{
// 		if(*file[i] != '*' || *file[i] != ' ' ||
// 		*file[i] != '1' || *file[i] != '2')
// 		{
// 			line[i] = ft_strjoin(tmp, file[i]);
// 			ft_putchar(*line[i]);
// 			i++;
// 		}
// 		else
// 		{
// 			ft_putstr("MAPERROR");
// 			return (0);
// 		}
// 	}
// 	*file = ft_strdup(ft_strchr(*file, '\n') + 1);
// 	return (**file);
// }
//
// char	get_line(const int fd, char **line)
// {
// 	static char	*file[FDLIM];
// 	char		buffer[BUFF_SIZE + 1];
// 	char		*tmp;
// 	int			bytesread;
// 	static int 	count;
//
// 	if (fd < 0 || !line || read(fd, buffer, 0) < 0)
// 		return (-1);
// 	if (!(file[fd]))
// 		file[fd] = ft_strnew(0);
// 	while (ft_strchr(file[fd], '\n') == NULL)
// 	{
// 		bytesread = read(fd, buffer, BUFF_SIZE);
// 		buffer[bytesread] = '\0';
// 		if (bytesread == 0)
// 			break ;
// 		tmp = ft_strjoin(file[fd], buffer);
// 		free(file[fd]);
// 		file[fd] = tmp;
// 	}
// 	count++;
// 	return (return_line(&file[fd], line, count));
// }
