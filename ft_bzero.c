/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhor <jhor@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:36:33 by jhor              #+#    #+#             */
/*   Updated: 2024/11/11 10:36:33 by jhor             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	int				i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = '0';
		i++;
	}
}

// int main()
// {
// 	char str[15] = "Hello World";

// 	ft_bzero(str + 5, 3*sizeof(char));

// 	printf("%s\n", str);
// }