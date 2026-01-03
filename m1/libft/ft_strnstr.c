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
}
