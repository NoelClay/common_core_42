/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namykim <namykim@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 18:53:00 by namykim           #+#    #+#             */
/*   Updated: 2026/01/20 18:53:00 by namykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

/*//v1
int		ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*cur;

	size = 0;
	if (lst == NULL)
		return (size);
	cur = lst;
	while(cur)
	{
		size++;
		cur = cur->next;
	}
	return (size);
}*/
