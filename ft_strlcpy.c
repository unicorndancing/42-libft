/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlapique <mlapique@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:21:23 by mlapique          #+#    #+#             */
/*   Updated: 2023/10/19 20:12:29 by mlapique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	size_t	lsrc;
	
	i = 0;
	lsrc = ft_strlen(src);
	if (!dstsize)
		return (lsrc);
	while (src[i] && i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (lsrc);
}

// int main ()
// {
// 	char src[] = "coucou";
// 	char dest[10];
// 	char src1[] = "coucou";
// 	char dest1[10] = "AAAAAAAAAA";

// 	printf("%ld\n%s\n",ft_strlcpy(dest,src,6),dest);
// 	printf("%ld\n%s\n",strlcpy(dest1,src1,6),dest1);
// }