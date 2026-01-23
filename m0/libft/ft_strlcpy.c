/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namykim <namykim@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 15:21:51 by namykim           #+#    #+#             */
/*   Updated: 2026/01/20 18:53:10 by namykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	res;

	res = ft_strlen(src);
	if (dstsize == 0)
		return (res);
	else if (res >= dstsize)
	{
		ft_memmove(dst, src, dstsize - 1);
		dst[dstsize - 1] = 0;
	}
	else
		ft_memmove(dst, src, res + 1);
	return (res);
}

/*size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	res;
	size_t	i;

	res = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (res);
	while (src[i] && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (res);
}*/

/*size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (dstsize > srclen + 1)
		ft_memcpy(dst, src, srclen + 1);
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = 0;
	}
	return (srclen);
}
*/