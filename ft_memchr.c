/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjumpale <pjumpale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:14:30 by pjumpale          #+#    #+#             */
/*   Updated: 2022/10/21 15:07:49 by pjumpale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	tem;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	tem = (unsigned char )c;

//printf ("%c", c);
	while (i < n)
	{
		if(p[i] == tem)
			return (p + i);
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
int main()
{
	char s[] = {0, 1, 2 ,3 ,4 ,5};
	char a[20];
	a = ft_memchr(s, 2 + 256, 3);
	char b[20];
	b = memchr(s, 2 + 256, 3);

	for (int i = 0; i < 5; i++)
		printf ("%d", a[i]);
	printf("\n");
	for (int i = 0; i < 5; i++)
		printf ("%d", b[i]);
 //ft_memchr(s, 2 + 256, 3);

}
*/