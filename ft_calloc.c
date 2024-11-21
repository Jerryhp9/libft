/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhor <jhor@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:32:06 by jhor              #+#    #+#             */
/*   Updated: 2024/11/18 14:32:06 by jhor             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 void *ft_calloc(size_t n, size_t s)
 {
	size_t totalsize;

	totalsize = n * s;
	void *memblock = malloc(totalsize);
	if (memblock == NULL)
	{
		return (NULL);
	}
	size_t i;
	i = 0;
	while (i < totalsize)
	{
		((char *)memblock)[i] = 0;
		i++;
	}
	return (memblock);
 }

 int main()
 {
	int	n = 10;
	int *str = ft_calloc(n, sizeof(int));

	int	i;

	i = 0;
	while (i < n)
	{
	printf("%d", str[i]);
	i++;
	}
	printf("\n");

	free(str);
	return (0);
 }