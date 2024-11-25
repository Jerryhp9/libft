/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhor <jhor@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:53:00 by jhor              #+#    #+#             */
/*   Updated: 2024/11/12 18:53:00 by jhor             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;
	int		i;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (size >= destlen)
		return (srclen + size);
	i = 0;
	while (src[i] != '\0' && (destlen + i + 1) < size)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
}
// int main()
// {
// 	char dest[20] = "Hello there";
// 	char src[] = "everyone";
// 	size_t result;

// 	result = ft_strlcat(dest, src, sizeof(dest));

// 	printf("%ld\n", result);
// }