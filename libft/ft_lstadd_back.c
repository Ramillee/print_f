/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 20:02:06 by ramil             #+#    #+#             */
/*   Updated: 2020/11/15 16:15:49 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	if (!lst)
		return ;
	if (new)
	{
		p = (*lst);
		if (p == NULL)
			(*lst) = new;
		else
		{
			while (p->next != NULL)
				p = p->next;
			p->next = new;
		}
	}
}
