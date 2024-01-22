/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlapique <mlapique@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:56:16 by mlapique          #+#    #+#             */
/*   Updated: 2023/10/19 20:52:51 by mlapique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	lenlittle;
	int		test;

	if ((!little || !big) && len == 0)
		return (NULL);
	i = 0;
	lenlittle = ft_strlen((char *)little);
	if (lenlittle == 0)
		return ((char *)&big[i]);
	while (big[i] && i <= len)
	{
		if (i + lenlittle <= len)
		{
			test = ft_strncmp(&big[i], little, lenlittle);
			if (test == 0)
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
