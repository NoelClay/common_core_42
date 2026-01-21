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
	if(!teststr)
		return (1);
	testlst = ft_lstnew(teststr);
	if(!testlst)
		return (1);
	ft_lstdelone(testlst, del);
	return (0);
}