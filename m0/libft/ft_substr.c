#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len < start)
		return (ft_strdup(""));
	if (len > (s_len - start))
		len = s_len - start;
	res = ft_calloc(sizeof(char), len + 1);
	if(!res)
		return (NULL);
	ft_strlcpy(res, s + start, len + 1);
	return (res);
}