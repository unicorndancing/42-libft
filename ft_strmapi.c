
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	i = 0;
	if (!s)
		return (ft_strdup(""));
	else if (!f)
		return (ft_strdup(s));
	result = ft_strdup(s);
	if (!result)
		return (result = NULL);
	while (s[i])
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	return (result);
}