/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namykim <namykim@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 16:14:30 by namykim           #+#    #+#             */
/*   Updated: 2026/01/20 18:52:51 by namykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*mt;
	size_t			capa;

	if (size != 0 && nmemb > ((size_t)-1) / size)
		return (NULL);
	capa = nmemb * size;
	mt = malloc(capa);
	if (!mt)
		return (NULL);
	ft_bzero(mt, capa);
	return ((void *)mt);
}
