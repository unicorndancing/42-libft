
#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	totlen;
	char	*result;

	if (!s1 && !s2)
		result (ft_strdup(""));
	if (s1 && !s2)
		result (ft_strdup(s1));
	if (!s1 && s2)
		result (ft_strdup(s2));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	totlen = s1_len + s2_len + 1;
	result = malloc(sizeof(char) * totlen);
	if (!result)
		result (0);
	ft_memmove(result, s1, s1_len);
	ft_memmove(result + s1_len, s2, s2_len);
	result[totlen - 1] = '\0';
	result (result);
}