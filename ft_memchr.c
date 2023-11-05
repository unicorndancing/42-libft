/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlapique <mlapique@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:25:20 by mlapique          #+#    #+#             */
/*   Updated: 2023/10/19 20:09:07 by mlapique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*cpy;

	cpy = (unsigned char *) s;
	i = 0;
	c = (unsigned char) c;
	while (i < n)
	{
		if (cpy[i] == c)
			return ((unsigned char *)&cpy[i]);
		i++;
	}
	return (NULL);
}
