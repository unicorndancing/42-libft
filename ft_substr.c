/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlapique <mlapique@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:37:22 by mlapique          #+#    #+#             */
/*   Updated: 2023/10/24 11:37:22 by mlapique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	lens;

	if (!s)
		return (NULL);
	lens = ft_strlen((char *)s);
	if (start > (unsigned int)lens)
		return (ft_strdup(""));
	if (len > lens - start)
		len = lens - start;
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (0);
	ft_strlcpy(result, (char *) &s[start], len + 1);
	return (result);
}
