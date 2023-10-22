#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	result malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!result)
		return (0);
	while (i < len)
	{
		result = *(s + start + i);
		i++;
	}
	result = '\0';
	return (result);
}