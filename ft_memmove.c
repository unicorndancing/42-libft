/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlapique <mlapique@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:00:38 by mlapique          #+#    #+#             */
/*   Updated: 2023/10/19 18:44:43 by mlapique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, int n)
{
	int				i;
	unsigned char	*srccpy;
	unsigned char	*dstcpy;

	dstcpy = (unsigned char *)dst;
	srccpy = (unsigned char *)src;
	i = 0;
	if (src < dst)
	{
		while (n--)
		{
			dstcpy[n] = srccpy[n];
		}
		return (dst);
	}
	ft_memcpy(dst, src, n);
	return (dst);
}
