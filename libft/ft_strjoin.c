/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shagazi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 16:14:59 by shagazi           #+#    #+#             */
/*   Updated: 2018/03/17 00:39:17 by shagazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	int		sizestr;
	int		count;

	count = 0;
	if (!s1 || !s2)
		return (NULL);
	sizestr = ft_strlen((char*)s1) + ft_strlen((char*)s2);
	if (!(fresh = ft_strnew(sizestr)))
		return (NULL);
	while (*s1 != '\0')
	{
		*fresh = *s1;
		fresh += (s1 += 1) ? 1 : 1;
		count++;
	}
	while (*s2 != '\0')
	{
		*fresh = *s2;
		fresh += (s2 += 1) ? 1 : 1;
		count++;
	}
	return (fresh - count);
}
