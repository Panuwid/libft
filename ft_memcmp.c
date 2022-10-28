/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjumpale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 21:38:35 by pjumpale          #+#    #+#             */
/*   Updated: 2022/09/20 15:59:41 by pjumpale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *a;
	unsigned char *b;
	size_t i;
	
	a = (unsigned char*)s1;
	b = (unsigned char*)s2;	
	i = 0;
	while (i < n)	
	{
		if (a[i] != b[i])
			return (a[i]- b[i]);
		i++;
	}
	return (0);
}
