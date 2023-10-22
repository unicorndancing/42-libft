#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*result;
	size_t	len;

	len = ft_strlen(s1) + 1;
	result = malloc(sizeof(char) * len);
	if (!result)
		return (0);
	result = ft_memcpy(result, s1, len);
	return (result);
}