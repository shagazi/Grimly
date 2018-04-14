/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myheadergrimly.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <shagazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 19:25:28 by shagazi           #+#    #+#             */
/*   Updated: 2018/04/14 00:13:39 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYHEADERGRIMLY_H
# define MYHEADERGRIMLY_H

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include "./libft/libft.h"

# define BUFF_SIZE 1
# define FDLIM 5000
# define ERR_CHECK(x, y) if(x) return (y)

int		get_next_line(const int fd, char **line);
int		return_line(char **file, char **line);



# endif
