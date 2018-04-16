/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <shagazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 20:42:15 by shagazi           #+#    #+#             */
/*   Updated: 2018/04/16 12:08:07 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "grimly.h"

int main(int argc, char *argv[])
{
	int fd;
	int i;
	char *line;
	char **map;
	// char *tmp;
	int arr;
	// int j;
/*check for leaks*/
	i = 1;
	arr = 0;
	if (argc > 1)
	{
		fd = open(argv[i], O_RDONLY);
		map = (char**)ft_strnew(0);
		if(get_next_line(fd, &line))
		{
			map[arr] = ft_strdup(line);
			ft_strdel(&line);
			ft_putstr(map[arr]);
			while(get_next_line(fd, &line) > 0)
			{
				// tmp = map[arr];
				arr++;
				map[arr] = ft_strdup(line);
				ft_strdel(&line);
				ft_putstr(map[arr]);
				// map[arr] = ft_strjoin(tmp, line);
				// ft_strdel(&tmp);
				// ft_strdel(&line);
			}
			// j = 0;
			// // while (j != arr)
			// // {
			// // 	ft_putstr(map[j]);
			// // 	// free(map[j]);
			// // 	// free(&map[arr]);
			// // 	j++;
			// // }
		}
		else
			return(-1);
	}
	else
		ft_putstr("Please enter a parameter.\n");
	while (1)
		;
	return(0);
}
