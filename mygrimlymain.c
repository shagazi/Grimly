/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mygrimlymain.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <shagazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 20:42:15 by shagazi           #+#    #+#             */
/*   Updated: 2018/04/14 00:08:11 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myheadergrimly.h"

int main(int argc, char *argv[])
{
	int fd;
	int i;
	char *line;
	char *map;
	char *tmp;
/*check for leaks*/
	i = 1;
	line = ft_strnew(0);
	if (argc > 1)
	{
		fd = open(argv[i], O_RDONLY);
		if(get_next_line(fd, &map))
		{
			while(map)
			{
				tmp = map;
				if (get_next_line(fd, &line)== 0)
				{
					ft_strdel(&tmp);
					ft_strdel(&line);
					break ;
				}
				map = ft_strjoin(tmp, line);
				ft_strdel(&tmp);
				ft_strdel(&line);
			}
			if (map)
				ft_putstr(map);
			// free(map);
		}
		else
			return(-1);
	}
	else
	{
		free(line);
		ft_putstr("Please enter a parameter.\n");
	}
	while (1)
		;
	return(0);
}
