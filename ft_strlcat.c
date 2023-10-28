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
#include <stdio.h>
#include <bsd/string.h>


int	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	k;
	size_t	j;

	i = 0;
	j = 0;
	k = 0;
	i = ft_strlen((char *)dst);
	k = ft_strlen((char *)src);
	if (n < i)
		k = k + n; 
	else
		k = k + i;
	while (src[j] && i + 1 < n)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (k);
}
