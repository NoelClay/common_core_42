/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namykim <namykim@student.42gyeongsan.kr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 14:48:49 by namykim           #+#    #+#             */
/*   Updated: 2025/12/25 14:50:24 by namykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isupper(int c)
{
	if (65 <= c && c <= 90)
		return (1);
	else
		return (0);
}

static int	ft_islower(int c)
{
	if (97 <= c && c <= 122)
		return (1);
	else
		return (0);
}

int	ft_isalpha(int c)
{
	if (ft_isupper(c) || ft_islower(c))
		return (1);
	else
		return (0);
}
