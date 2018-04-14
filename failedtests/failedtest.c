/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   failedtest1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <shagazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 00:53:34 by shagazi           #+#    #+#             */
/*   Updated: 2018/04/13 01:22:54 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int		checkfd(const int fd, char **line)
// {
// 	char *buffer[1];
//
// 	if (fd < 0 || !line || read(fd, buffer, 0) < 0)
// 		return (-1);
// 	else
// 		return (1);
// }

// char	*get_line(const int fd, char **line)
// {
// 	char	*buf;
// 	int		ret;
// 	char	*tmp;
// 	static int 	count;
//
// 	ERR_CHECK(!line, 0);
// 	ERR_CHECK(fd < 0, 0);
// 	*line = malloc(2);
// 	buf = malloc(2);
// 	ERR_CHECK(!line || !buf, 0);
// 	ERR_CHECK((ret = read(fd, buf, 0)) < 0, 0);
// 	while ((ret = read(fd, buf, !!BUFF_SIZE)))
// 	{
// 		if(newline(buf, &ret, &count))
// 			break ;
// 		*buf = charcheck(buf, &count);
// 		tmp = *line;
// 		*line = ft_strjoin(*line, buf);
// 		free(tmp);
// 	}
// 	free(buf);
// 	ERR_CHECK((ret == 0), 0);
// 	return (*line);
// }





// int main(int argc, char *argv[])
// {
// 	int fd;
// 	int i;
// 	char **line;
// 	char *map;
// 	char *tmp;
//
// 	i = 1;
// 	line = (char **)malloc(sizeof(char *) * 2);
// 	// map = ft_strnew(0);
// 	if (argc > 1)
// 	{
// 		fd = open(argv[i], O_RDONLY);
// 		if(checkfd(fd, line) == 1)
// 		{// the problem is most likely here malloc map//
// 			map = get_line(fd, line);
// 			while(map)
// 			{
// 				// ft_putstr(*map);
// 				tmp = map;
// 				*line = get_line(fd, line);
// 				if (line == 0)
// 				{
// 					free(tmp);
// 					break ;
// 				}
// 				map = ft_strjoin(tmp, *line);
// 				// map = ft_strjoin(tmp, get_line(fd, line));
// 				free(tmp);
//
// 			}
// 			ft_putstr(map);
// 			ft_strdel(&map);
// 		}
// 		else
// 			return(0);
// 	}
// 	else
// 		ft_putstr("Please enter a parameter.\n");
// 	// while (1)
// 	// 	;
// 	return(0);
// }
