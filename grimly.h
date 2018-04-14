/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grimly.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <shagazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 19:25:28 by shagazi           #+#    #+#             */
/*   Updated: 2018/04/13 01:22:55 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRIMLY_H
# define GRIMLY_H

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include "../libft/libft.h"

# define BUFF_SIZE 1
# define ERR_CHECK(x, y) if(x) return (y)

char	*get_line(const int fd);
int		checkfd(const int fd);



# endif
