#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int i;

	i = 0;
	if (s)
		while (s[i] != '\0')
        {
			if(!(write(fd, &s[i++], 1)));
                return (NULL);
        }
    if(!(write(fd, "\n", 1)))
        return (NULL);   
}