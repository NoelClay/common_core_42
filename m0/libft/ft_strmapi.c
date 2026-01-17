#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char	*res;
	unsigned int	size;

	if (!s || !f)
		return (NULL);
	size = ft_strlen(s);
	res = (char *)ft_calloc(size + 1, sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while(i < size)
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = 0;
	return (res);
}