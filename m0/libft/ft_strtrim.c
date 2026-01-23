/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namykim <namykim@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 18:53:13 by namykim           #+#    #+#             */
/*   Updated: 2026/01/20 18:53:13 by namykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isset(unsigned char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	last;

	last = ft_strlen(s1);
	if (last < 1)
		return (ft_strdup(s1));
	last--;
	i = 0;
	while(isset(*(s1 + i), set))
		i++;
	while(last > i && isset(*(s1 + last), set))
		last--;
	return (ft_substr(s1, i, last - i + 1));
}

/*static int	ft_isinset(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_isinset(s1[start], set))
		start++;
	if (!s1[start])
		return (ft_strdup(""));
	end = ft_strlen(s1) - 1;
	while (start < end && ft_isinset(s1[end], set))
		end--;
	res = ft_substr(s1, start, end - start + 1);
	return (res);
}*/
