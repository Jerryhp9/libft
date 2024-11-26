/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhor <jhor@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:46:48 by jhor              #+#    #+#             */
/*   Updated: 2024/11/19 13:46:48 by jhor             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int unsigned	i;
	char			*substr;
	size_t			s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (len > s_len)
		len = s_len;
	substr = (char *)malloc(sizeof (char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	if (start >= s_len)
		substr[0] = '\0';
	i = 0;
	while (i < len)
	{
		substr[i] = s[i + start];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// int main()
// {
// 	char str[] = "Welcome World";

// 	printf("%s\n", ft_substr(str, 6, 6));
// }