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

void	*memchr(const void *s, int c, size_t n)
{
    int		i;
    char	*cpy;

    cpy = (unsigned char*)s;
    i = 0;
    while (cpy[i])
    {
        i++;
        if (cpy[i] == c)
            return (cpy[i]);
    }
    return (NULL);
}