/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhor <jhor@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:33:51 by jhor              #+#    #+#             */
/*   Updated: 2024/11/11 14:33:51 by jhor             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;
	int				i;

	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	i = 0;
	if (pdest <= psrc)
	{
		while (i < n)
		{
			pdest[i] = psrc[i];
			i++;
		}
	}
	else
	{
		i = n - 1;
		while (i >= 0)
		{
			pdest[i] = psrc[i];
			i--;
		}
	}
	return (dest);
}

/*int main()
{
	char str[10] = "Yello!";

	ft_memmove(str + 3, str, 3*sizeof(char));

	printf("%s\n", str);
}*/