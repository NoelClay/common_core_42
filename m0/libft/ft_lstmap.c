/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namykim <namykim@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 18:52:59 by namykim           #+#    #+#             */
/*   Updated: 2026/01/20 18:52:59 by namykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*obj;
	void	*con;

	if (!lst || !f || !del)
		return (NULL);
	res = NULL;
	while (lst)
	{
		con = (*f)(lst->content);
		obj = ft_lstnew(con);
		if (!obj)
		{
			(*del)(con);
			ft_lstclear(&res, (*del));
			return (NULL);
		}
		ft_lstadd_back(&res, obj);
		lst = lst->next;
	}
	return (res);
}
