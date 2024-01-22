/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlapique <mlapique@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:39:23 by mlapique          #+#    #+#             */
/*   Updated: 2023/10/24 11:39:23 by mlapique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_nb(long n)
{
	size_t	len_nb;

	len_nb = 0;
	if (n < 0)
	{
		len_nb++;
		n *= -1;
	}
	while (n >= 1)
	{
		len_nb++;
		n /= 10;
	}
	return (len_nb);
}

static char	*ft_tabcreation(char *result, long nbr, int len, int negative)
{
	if (nbr != 0)
		result = malloc(sizeof(char) * (len + 1));
	else
		return (result = ft_strdup("0"));
	if (!result)
		return (0);
	if (nbr < 0)
	{
		negative = -1;
		nbr *= -1;
	}
	result[len] = '\0';
	while (--len)
	{
		result[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (negative == -1)
		result[0] = '-';
	else
		result[0] = (nbr % 10) + '0';
	return (result);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*result;
	long	nbr;
	int		negative;

	nbr = n;
	len = ft_len_nb(nbr);
	result = 0;
	negative = 1;
	result = ft_tabcreation(result, nbr, len, negative);
	if (!result)
		return (0);
	return (result);
}
