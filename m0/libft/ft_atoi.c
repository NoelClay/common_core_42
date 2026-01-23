/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namykim <namykim@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 15:57:07 by namykim           #+#    #+#             */
/*   Updated: 2026/01/20 18:52:50 by namykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	unsigned char	cc;

	cc = (unsigned char)c;
	if (cc == '\t' || cc == '\n' || cc == '\v' || cc == '\f' || cc == '\r')
		return (1);
	if (cc == ' ')
		return (1);
	return (0);
}

static int	ft_signtoi(int c)
{
	unsigned char	cc;

	cc = (unsigned char)c;
	if (cc == '+')
		return (1);
	if (cc == '-')
		return (-1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	while (ft_isspace(*str) && *str)
		str++;
	sign = ft_signtoi(*str);
	if (!ft_isdigit(*str) && sign != 0)
		str++;
	while (ft_isdigit(*str) && *str)
	{
		res *= 10;
		res += ((*str) - 48);
		str++;
	}
	if (res == 0)
		return (0);
	if (sign == -1)
		res *= -1;
	return (res);
}

/*static int	ft_is_space(const char c)
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
*/