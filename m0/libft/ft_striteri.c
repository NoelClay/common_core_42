#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	unsigned int	size;

	if (!s || !f)
		return ;
	size = ft_strlen(s);
	i = 0;
	while(i < size)
	{
		(*f)(i, s + i);
		i++;
	}
}