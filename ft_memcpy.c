/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlapique <mlapique@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:44:14 by mlapique          #+#    #+#             */
/*   Updated: 2023/10/19 15:52:48 by mlapique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, int n)
{
	int		i;
	unsigned char *dstcpy;
	unsigned char *srccpy;

	dstcpy = (unsigned char *) dst;
	srccpy = (unsigned char *) src;
	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dstcpy[i] = srccpy[i]; 
		i++;
	}
	return (dst);
}
