/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhor <jhor@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:43:18 by jhor              #+#    #+#             */
/*   Updated: 2024/11/11 11:43:18 by jhor             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char		*pDest;
    const unsigned char	*pSrc;
    int 				i;

    pDest = (unsigned char*)dest;
    pSrc = (const unsigned char*)src;
    i = 0;
    while (i < n)
    {
        pDest[i] = pSrc[i];
        i++;
    }
    return ((char *)pDest);
}

// int main()
// {
//     char src[10] = "Yello!";
//     char dest[10] = "Hello";

//     ft_memcpy(dest, src, 6);

//     printf("%s\n", dest);
// }