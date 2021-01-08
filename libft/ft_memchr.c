/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:36:57 by ramil             #+#    #+#             */
/*   Updated: 2020/11/08 04:30:13 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	new_c;

	i = 0;
	ptr = (unsigned char *)arr;
	new_c = (unsigned char)c;
	while (i < n)
	{
		if (ptr[i] == new_c)
		{
			return (ptr + i);
		}
		i++;
	}
	return (NULL);
}
