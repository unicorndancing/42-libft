/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlapique <mlapique@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:07:48 by mlapique          #+#    #+#             */
/*   Updated: 2023/11/02 17:00:57 by mlapique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (word);
}

static void	freememory(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		str[i] = NULL;
		i++;
	}
	free(str);
	str = NULL;
}

static char	**spliting(char **result, int i, char c, char *s)
{
	int	start;
	int	ind;

	ind = 0;
	start = 0;
	while (s[i])
	{
		if (s[i] == c)
			start = i + 1;
		else if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			result[ind] = ft_substr(s, start, i - start + 1);
			if (result[ind] == NULL)
			{
				freememory(result);
				return (NULL);
			}
			ind++;
		}
		i++;
	}
	result[ind] = 0;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		ind;
	int		start;

	ind = 0;
	i = 0;
	start = 0;
	if (!s)
		return (NULL);
	result = ft_calloc(sizeof(char *), (ft_count((char *)s, c) + 1));
	if (!result)
		return (NULL);
	result = spliting(result, i, c, (char *)s);
	return (result);
}
