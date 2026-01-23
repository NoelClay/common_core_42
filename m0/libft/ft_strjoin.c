/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namykim <namykim@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 18:53:09 by namykim           #+#    #+#             */
/*   Updated: 2026/01/20 18:53:09 by namykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	s1len;
	size_t	s2len;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	res = (char *)malloc(sizeof(char) * (s1len + s2len + 1));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, s1len + 1);
	ft_strlcat(res, s2, s1len + s2len + 1);
	return (res);
}

/*char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	if (lens1 > ((size_t)-1) - lens2 - 1)
		return (NULL);
	res = (char *)ft_calloc(sizeof(char), lens1 + lens2 + 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, lens1 + 1);
	ft_strlcat(res + lens1, s2, lens2 + 1);
	return (res);
}
*/