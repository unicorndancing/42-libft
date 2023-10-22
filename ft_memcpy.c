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
	char	*tempdst;
	char	*tempsrc;

	tempdst = (unsigned char)dst;
	tempsrc = (unsigned char)src;
	i = 0;
	while (i < n)
	{
		tempdst[i] = tempsrc[i]; 
		i++;
	}
	return (dst);
}
