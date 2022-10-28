/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjumpale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:19:25 by pjumpale          #+#    #+#             */
/*   Updated: 2022/10/21 13:18:39 by pjumpale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char * dst, const char * src, size_t dstsize)

{
	size_t	x;
	size_t	l;

	l = ft_strlen(src);
	x = 0;
	if (dstsize > 0)
	{
	while (src[x] != '\0' && x < dstsize - 1)
	{
		dst[x] = src[x];
		x++;
	}
	dst[x] = '\0';
	}
	return (l);
}
