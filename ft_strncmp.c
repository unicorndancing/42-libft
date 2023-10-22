/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlapique <mlapique@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:18:41 by mlapique          #+#    #+#             */
/*   Updated: 2023/10/19 20:37:43 by mlapique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t	i;

    i = 0;
    while (s1[i] == s2[i] && i < n - 1 && s1[i])
        i++;
    return (s1[i] - s2[i]);
}
