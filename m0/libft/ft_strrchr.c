/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namykim <namykim@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 13:54:03 by namykim           #+#    #+#             */
/*   Updated: 2026/01/20 18:53:13 by namykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*chase;
	char	operand;

	operand = (char)c;
	chase = (char *)(s + ft_strlen(s));
	while (chase >= s)
	{
		if (*chase == operand)
			return (chase);
		if (chase == s)
			break ;
		chase--;
	}
	return (NULL);
}

/*char	*ft_strrchr(const char *s, int c)
{
	char	*record;
	char	*res;

	record = ft_strchr(s, c);
	res = NULL;
	while (record != NULL)
	{
		res = record;
		if (*record == '\0')
			break;
		record = ft_strchr((const char *)(record + 1), c);
	}
	return (res);
}*/

/*char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
*/