/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhor <jhor@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:28:24 by jhor              #+#    #+#             */
/*   Updated: 2024/11/12 18:45:38 by jhor             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H 

# include <stddef.h>
# include <stdio.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *str);
void ft_memset(void *s, int x, size_t n);
void ft_bzero(void *s, size_t n);
void ft_memcpy(void *to, void *from, size_t n);

#endif