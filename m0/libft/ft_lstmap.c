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
		if(!obj)
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