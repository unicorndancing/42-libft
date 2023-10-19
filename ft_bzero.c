/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlapique <mlapique@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:32:17 by mlapique          #+#    #+#             */
/*   Updated: 2023/10/19 15:35:01 by mlapique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *b, int n)
{
	int	i;
	char *temp;

	i = 0;
	temp = (char)b;
	while (i < n)
	{
		temp[i] = 0;
		i++;
	}
	return (b);
}
