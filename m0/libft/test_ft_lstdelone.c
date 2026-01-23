/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lstdelone.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namykim <namykim@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 09:19:25 by namykim           #+#    #+#             */
/*   Updated: 2026/01/22 09:19:27 by namykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	del(void *ptr)
{
	free(ptr);
}

int	main(void)
{
	t_list	*testlst;
	char	*teststr;

	teststr = ft_strdup("12345");
	if (!teststr)
		return (1);
	testlst = ft_lstnew(teststr);
	if (!testlst)
		return (1);
	ft_lstdelone(testlst, del);
	return (0);
}
