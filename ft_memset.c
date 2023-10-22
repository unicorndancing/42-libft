/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlapique <mlapique@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:10:06 by mlapique          #+#    #+#             */
/*   Updated: 2023/10/19 15:52:11 by mlapique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, int n)
{
	int		i;
	char	*cpyb;

	cpyb = (char)b;
	i = 0;
	while (i < n)
	{
		cpyb[i] = c;
		i++;
	}
	return (b);
}

