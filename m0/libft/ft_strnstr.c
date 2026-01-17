/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namykim <namykim@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 15:17:46 by namykim           #+#    #+#             */
/*   Updated: 2026/01/02 15:17:48 by namykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (little[0] == 0)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && big[i + j] && i + j < len)
		{
			j++;
			if (little[j] == 0)
				return ((char *)big + i);
		}
		i++;
	}
	return (0);
}

/*//v2
char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;
	size_t	j;

	i = 0;
	little_len = ft_strlen(little);
	if (little_len <= 0)
		return (big);
	while (big[i + little_len] != 0 && len < (i + little_len))
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (j < little_len)
			{
				if(big[i + j] != little[j])
					break;
				j++;
			}
			if(j == little_len)
				return (big + i);
		}
		i++;
	}
	return (NULL);
}*/

/*//v1
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	lenlittle;

	i = 0;
	lenlittle = ft_strlen(little);
	if (lenlittle == 0)
		return ((char *)big);
	while ((i + lenlittle) <= len && big[i] != 0)
	{
		if (ft_strncmp(big + i, little, lenlittle) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}*/
