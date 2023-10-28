/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlapique <mlapique@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:38:48 by mlapique          #+#    #+#             */
/*   Updated: 2023/10/24 11:38:48 by mlapique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*result;
	size_t	len;

	len = ft_strlen((char *)s1) + 1;
	result = malloc(sizeof(char) * len);
	if (!result)
		return (0);
	result = ft_memcpy(result, s1, len);
	return (result);
}