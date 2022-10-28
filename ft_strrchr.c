/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjumpale <pjumpale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 22:38:34 by pjumpale          #+#    #+#             */
/*   Updated: 2022/10/21 15:15:41 by pjumpale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	unsigned char p;
	p = (unsigned char)c;
	i = ft_strlen(s);
	if (!s)
		return (NULL);	
	while (s[i] !=  p && i > 0)
	{
		i--;
	}
	if (s[i]  == p)	
		return ((char *)s + i);
	else
		return (NULL);
}

