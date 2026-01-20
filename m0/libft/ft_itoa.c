/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namykim <namykim@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 18:52:55 by namykim           #+#    #+#             */
/*   Updated: 2026/01/20 18:52:55 by namykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_size(int n)
{
	int		res;
	long	nb;

	nb = n;
	res = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		res += 1;
		nb *= -1;
	}
	while (nb != 0)
	{
		nb /= 10;
		res++;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	long	nb;

	nb = n;
	i = ft_count_size(n);
	res = (char *)ft_calloc(i + 1, sizeof(char));
	if (!res)
		return (NULL);
	if (n < 0)
	{
		res[0] = '-';
		nb *= -1;
	}
	if (n == 0)
		res[0] = '0';
	res[i--] = '\0';
	while (nb != 0)
	{
		res[i--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (res);
}
