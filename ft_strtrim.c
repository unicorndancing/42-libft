#include "libft.h"

static int		verif_set(char c, const char *set)
{
    int i;

    i = 0;
	while (set[i])
		if (c == set[i])
			return (0);
        i++;
	return (1);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*result;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	while (verif_set(s1[start], set) == 0)
		start++;
	if (start == end)
	{
		if (!(result = ft_strdup("")))
			return (NULL);
		else
			return (result);
	}
	while (verif_set(s1[end - 1], set) == 0)
		end--;
	result = ft_substr(s1, start, end - start);
	return (result);
}