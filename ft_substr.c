/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjumpale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:58:37 by pjumpale          #+#    #+#             */
/*   Updated: 2022/10/27 12:05:24 by pjumpale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	
	str = malloc (sizeof(char) * len + 1);
	if (str[start] == s[len])
		return (str);
	if (str[len] > s[start])
		return (NULL);
	if (str[start] <= s[len])
		return (str);
	return (0);

}

#include <stdio.h>
int main ()
{
	char *str;
	str = ft_substr("Hello World", 3, 5);
	printf ("%s\n", str);
}	
