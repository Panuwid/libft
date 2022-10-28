/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjumpale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:16:26 by pjumpale          #+#    #+#             */
/*   Updated: 2022/10/21 13:17:55 by pjumpale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst,const void *src,size_t n)
{
	size_t	x;
	char	*dest;
	char	*sourc;
	
	x = 0;
	dest = (char *)dst;
	sourc = (char *)src;
	if (!src && !dst)
		return (NULL);
	while (x < n)
	{
		dest[x] = sourc[x];
		x++;	
	}
	return (dest);
}
