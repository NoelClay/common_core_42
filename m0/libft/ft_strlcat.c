/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namykim <namykim@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 17:12:40 by namykim           #+#    #+#             */
/*   Updated: 2026/01/20 18:53:09 by namykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len >= dstsize)
		return (dst_len + src_len);
	if ((src_len + dst_len) < dstsize)
		ft_memcpy(dst[dst_len], src, src_len + 1);
	else
	{
		ft_memcpy(dst[dst_len], src, (dstsize - dst_len - 1));
		dst[dstsize - 1] = '\0';
	}
	return (dst_len + src_len);
}

/*
//v1
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (dlen >= dstsize)
		return (dlen + slen);
	i = 0;
	if (dstsize >= (dlen + slen + 1))
	{
		while(src[i] != 0)
		{
			dst[dlen + i] = src[i];
			i++;
		}
		dst[dlen + i] = 0;
		return (dlen + slen);
	}
	while((dlen + i) < dstsize)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = 0;
	return (dlen + slen);
}
*/
