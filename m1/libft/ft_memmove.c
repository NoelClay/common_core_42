/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namykim <namykim@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 13:23:40 by namykim           #+#    #+#             */
/*   Updated: 2025/12/26 13:23:43 by namykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t	i;

	if (s1 > s2)
	{
		while (n > 0)
		{
			n--;
			*((unsigned char *)s1 + n) = *((unsigned char *)s2 + n);
		}
	}
	if (s1 < s2)
	{
		i = 0;
		while (i < n)
		{
			*((unsigned char *)s1 + i) = *((unsigned char *)s2 + i);
			i++;
		}
	}
	return (s1);
}
