/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlapique <mlapique@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:42:27 by mlapique          #+#    #+#             */
/*   Updated: 2023/10/19 20:53:14 by mlapique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	k;
	size_t	j;

	if ((!dst || !src) && size == 0)
		return (0);
	i = 0;
	j = 0;
	k = 0;
	i = ft_strlen((char *)dst);
	k = ft_strlen((char *)src);
	if (size < i)
		k = k + size;
	else
		k = k + i;
	while (src[j] && i + 1 < size)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (k);
}
