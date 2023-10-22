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


int	ft_strlcat(char *dst, const char *src, int n)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	j = 0;
	k = 0;
	while (dst[i])
		i++;
	while (src[k])
		k++;
	if (n <= i)
		k = k + n;
	else
		k = k + i;
	while (src[j] && i + 1 < n)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (k);
}
int main (void)
{
	char dst[] = "123456789";
	char src[] = "abcde";
	char dst1[] = "123456789";
	char src1[] = "abcde";
	printf("%d\n%s\n" ,ft_strlcat(dst,src,1), dst);
	printf("%zu\n%s" ,strlcat(dst1,src1,1),dst1);
}
