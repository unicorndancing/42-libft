/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlapique <mlapique@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:39:32 by mlapique          #+#    #+#             */
/*   Updated: 2023/10/24 11:39:32 by mlapique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*result;
	size_t	overflowpro;

	if (!nmemb || !size)
		return (malloc(0));
	overflowpro = size * nmemb;
	if (overflowpro / nmemb != size)
		return (NULL);
	result = malloc(overflowpro);
	if (!result)
		return (NULL);
	ft_bzero(result, overflowpro);
	return (result);
}
