/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhor <jhor@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:50:51 by jhor              #+#    #+#             */
/*   Updated: 2024/11/14 15:50:51 by jhor             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	char	*p1 ;
	char	*p2;
	int		i;

	p1 = (char *)str1;
	p2 = (char *)str2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
		{
			return (p1[i] - p2[i]);
		}
		i++;
	}
}
// #include <string.h>
// int main ()
// {
// 	// (void)ac;
// 	char strr1[] = "information underload";
// 	char strr2[] = "information overload";
// char *strr1 = av[1];
// char *strr2 = ac[2];

// 	printf("%d\n", ft_memcmp(strr1, strr2, 15*sizeof(char)));
// printf("%d\n", memcmp(strr1, strr2, 4*sizeof(char)));
// }