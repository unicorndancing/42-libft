/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlapique <mlapique@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:42:39 by mlapique          #+#    #+#             */
/*   Updated: 2023/10/19 18:44:43 by mlapique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 int memcmp(const void *s1, const void *s2, size_t n)
 {
    size_t  i;
    unsigned char *s1cpy;
    unsigned char *s2cpy;

    s1cpy = s1;
    s2cpy = s2;
    i = 0;
    while (s1cpy[i] && s1cpy[i] == s2cpy[i] && i < n)
        i++;
    return (s1cpy[i] - s2cpy[i]);
 }