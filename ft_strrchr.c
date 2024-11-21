/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhor <jhor@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:56:01 by jhor              #+#    #+#             */
/*   Updated: 2024/11/13 17:56:01 by jhor             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*p = s + ft_strlen(s) -1;

	while (p >= s)
	{
		if (*p == (char)c)
		{
			return ((char *)p);
		}
		p--;
	}
	return ('\0');
}

/*int main() {
	const char *str = "Hello, world!";
	char *ptr = ft_strrchr(str, 'o');

	if (*ptr != '\0') {
		printf("%s\n", ptr);
	}
	return 0;
}*/