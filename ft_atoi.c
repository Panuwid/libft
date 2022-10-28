/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjumpale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 16:07:52 by pjumpale          #+#    #+#             */
/*   Updated: 2022/09/09 20:55:11 by pjumpale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	res;

	i = 0;
	n = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			n = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * n);
}
/*
int main()
{
	printf("atoi\t : %d\n", atoi("    2147483647"));
	printf("ft_atoi\t : %d\n", ft_atoi("    2147483647"));
	
	printf("atoi\t : %d\n", atoi(" -2147483648 1"));
	printf("ft_atoi\t : %d\n", ft_atoi("    -2147483648 1"));
	
	printf("atoi\t : %d\n", atoi(" s   2147483647"));
	printf("ft_atoi\t : %d\n", ft_atoi(" s   2147483647"));
	
	printf("atoi\t : %d\n", atoi("    +-2147483647"));
	printf("ft_atoi\t : %d\n", ft_atoi("    +-2147483647"));
	
	printf("atoi\t : %d\n", atoi("    2147a48a3647"));
	printf("ft_atoi\t : %d\n", ft_atoi("    2147a48a3647"));
	
	printf("atoi\t : %d\n", atoi("4294967295"));
	printf("ft_atoi\t : %d\n", ft_atoi("4294967295"));
	
	printf("atoi\t : %d\n", atoi("-4294967296"));
	printf("ft_atoi\t : %d\n", ft_atoi("-4294967296"));
	
	printf("atoi\t : %d\n", atoi("2147483649"));
	printf("ft_atoi\t : %d\n", ft_atoi("2147483649"));
	
	printf("atoi\t : %d\n", atoi("+2147483647"));
	printf("ft_atoi\t : %d\n", ft_atoi("+2147483647"));
	
	printf("atoi\t : %d\n", atoi("0"));
	printf("ft_atoi\t : %d\n", ft_atoi("0"));
	
	//printf("ft_atoi with NULL input\n");
	//printf("atoi\t : %d\n", atoi(NULL));
	//printf("ft_atoi\t : %d\n", ft_atoi(NULL));
		
	printf("atoi\t : %d\n", atoi(""));
	printf("ft_atoi\t : %d\n", ft_atoi(""));
}
*/
