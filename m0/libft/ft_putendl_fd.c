#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	nl;

	nl = '\n';
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, &nl, 1);
}