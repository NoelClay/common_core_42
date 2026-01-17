/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namykim <namykim@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 15:57:07 by namykim           #+#    #+#             */
/*   Updated: 2026/01/02 15:57:08 by namykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_space(const char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	if (c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

static int	ft_is_sign(const char c)
{
	if (c == '+')
		return (1);
	if (c == '-')
		return (-1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int		i;
	long	res;
	int		sign;

	i = 0;
	while (ft_is_space(nptr[i]))
		i++;
	sign = 1;
	if (ft_is_sign(nptr[i]) != 0)
		sign = ft_is_sign(nptr[i++]);
	res = 0;
	while (nptr[i] != 0 && ft_isdigit(nptr[i]))
	{
		res *= 10;
		res += (nptr[i] - 48);
		i++;
	}
	res *= sign;
	return ((int)res);
}
