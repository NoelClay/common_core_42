/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namykim <namykim@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 17:12:40 by namykim           #+#    #+#             */
/*   Updated: 2025/12/26 17:12:43 by namykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (dstsize <= dlen)
		return (dstsize + slen);
	i = 0;
	while ((i + dlen) < dstsize - 1 && src[i] != '\0')
	{
		dst[i + dlen] = src[i];
		i++;
	}
	dst[i + dlen] = '\0';
	return (dlen + slen);
}
