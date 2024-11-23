/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhor <jhor@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:41:38 by jhor              #+#    #+#             */
/*   Updated: 2024/11/20 20:41:38 by jhor             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcount(const char *s, int c)
{
	int	wordcount;

	wordcount = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s != '\0')
			wordcount++;
		while (*s != c && *s)
			*s++;
	}
	return (wordcount);
}

char	**ft_split(char const *s, char c)
{
	int		wordlen;
	char	**str;
	int		i;

	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (wordcount(s, c) + 1));
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c && *s)
		{
			if (!ft_strchr(s, c))
				wordlen = ft_strlen(s);
			else
				wordlen = ft_strchr(s, c) - s;
			str[i] = ft_substr(s, 0, wordlen);
			i++;
			s += wordlen;
		}
	}
	str[i] = NULL;
	return (str);
}

// int main ()
// {
// 	char *str = "___________________________qwe____rtyy__/////_";

// 	char **output = ft_split(str, '_');
// 	int index = 0;
// 	while (output[index])
// 	{
// 		printf("%s\n", output[index]);
// 		index++;
// 	}
// }
