#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		size;

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
