/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjumpale <pjumpale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:55:05 by pjumpale          #+#    #+#             */
/*   Updated: 2022/10/21 15:40:06by pjumpale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	z;

	x = 0;
	z = 0;
	if (!needle[0])
		return ((char *)haystack);
		while (x < len && haystack[x])
		{
			if (haystack[x] == needle[z])
				//return ((char *)&haystack[x]);
					z++;
			else
			{
					x -= z;
					z = 0;
			}
			if (!needle[z])
				return ((char *)haystack + x - z +1);
			x++;
		}
	return (NULL);
}
/*
#include <string.h>
int main(void)
{
	char * empty = (char*)"";
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";

	printf("%s\n", ft_strnstr(haystack, needle, -1));
	printf("%s", strnstr(haystack, needle, -1));
}
*/