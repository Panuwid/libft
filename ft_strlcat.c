/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjumpale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 23:10:10 by pjumpale          #+#    #+#             */
/*   Updated: 2022/10/21 13:09:42 by pjumpale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char * dst, const char * src, size_t dstsize)
{
	size_t	x;

	x = ft_strlen(dst);
	if (ft_strlen(dst) >= dstsize)
		return (dstsize + ft_strlen(src));
	while (*src && x < dstsize -1)
		dst[x++] = *src++;
	dst[x] = '\0';
	return (ft_strlen(src) + x);
}


/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char dst[20] = "Hello";
	char src[20] = "Mew";

	int i = strlcat(dst, src, 4);
	printf("len : %d\n", i);
	printf("dst : %s\n", dst);
}
*/
