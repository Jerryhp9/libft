/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhor <jhor@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:24:50 by jhor              #+#    #+#             */
/*   Updated: 2024/11/07 18:08:47 by jhor             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

/**
* @brief counting str char
* @param char string
* @return return i when finish counting
*/

int ft_strlen(char *str)
{
	int i;

	i = 0;
	
	while (str[i] != '\0')
	{
	i++;
	}
	return (i);
}

/*int main ()
{
	char *str1 = "abcdefuirythgnblkyrt";
	printf("%d", ft_strlen(str1));
	return (0);
}*/