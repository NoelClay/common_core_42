/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namykim <namykim@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 14:20:11 by namykim           #+#    #+#             */
/*   Updated: 2026/01/02 14:20:13 by namykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	cc;
	unsigned char	*ss;

	cc = (unsigned char)c;
	ss = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ss[i] == cc)
			return ((void *)&ss[i]);
		i++;
	}
	return (NULL);
}
