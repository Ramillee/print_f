/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramil <ramil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 22:47:43 by ramil             #+#    #+#             */
/*   Updated: 2020/11/14 23:11:02 by ramil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*old_elem;

	if (del && lst)
	{
		while (*lst)
		{
			del((*lst)->content);
			old_elem = *lst;
			*lst = old_elem->next;
			free(old_elem);
		}
	}
	*lst = NULL;
}
