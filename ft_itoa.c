/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhor <jhor@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 20:48:57 by jhor              #+#    #+#             */
/*   Updated: 2024/11/21 20:48:57 by jhor             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Handle edge cases '0'
//Calculate digits and handle negative value
//Allocate memory with malloc
//Convert the number into string

#include "libft.h"

#include <stdio.h>

static int	numlen(int n)
{
	int	nbr;
	int	len;

	len = 0;
	nbr = n;
	while (nbr != 0)
	{
		nbr /= 10;
		len++;
	}
	if (n < 0)
		len++;
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		nbr;

	if (n == '0')
		return (ft_strdup(""));
	str = (char *)malloc((sizeof(char)) * (numlen(n) + 1));
	if (str == NULL)
		return (NULL);
	len = numlen(n);
	nbr = n;
	str[len] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		str[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}

// int main()
// {
// 	int num = -4200;

// 	printf("%s", ft_itoa(num));
// }