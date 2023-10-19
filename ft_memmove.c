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
	int		i;
	int		len;
	char	*srccpy;
	char	*dstcpy;
	char	*tempsrc;

	dstcpy = (unsigned char )dst;
	srccpy = (unsigned char)src;
	i = -1;
	len = ft_strlen(src);
	while (i++ < n)
		tempsrc[i] = srccpy[i];
	dst = memcpy (dst, tempsrc, n);
	return (dst);
}
