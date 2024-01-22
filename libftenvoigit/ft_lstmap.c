/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlapique <mlapique@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:54:20 by mlapique          #+#    #+#             */
/*   Updated: 2023/11/02 16:59:16 by mlapique         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*first;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	first = NULL;
	while (lst)
	{
		temp = (f)(lst->content);
		new_list = ft_lstnew(temp);
		if (!(new_list))
		{
			ft_lstclear(&first, (del));
			(del)(temp);
			return (NULL);
		}
		ft_lstadd_back(&first, new_list);
		lst = lst->next;
	}
	return (first);
}
