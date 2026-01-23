/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namykim <namykim@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 14:49:11 by namykim           #+#    #+#             */
/*   Updated: 2026/01/20 18:53:01 by namykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				res;
	unsigned char	*ucv1;
	unsigned char	*ucv2;

	ucv1 = (unsigned char *)s1;
	ucv2 = (unsigned char *)s2;
	while (n > 0)
	{
		res = *ucv1 - *ucv2;
		if (res != 0)
			return (res);
		n--;
		if (n == 0)
			break ;
		ucv1++;
		ucv2++;
	}
	return (0);
}

/*int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}*/
