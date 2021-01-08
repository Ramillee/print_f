/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 20:22:58 by atweek            #+#    #+#             */
/*   Updated: 2020/11/08 04:35:18 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		size;
	char	*dst;
	int		i;

	size = ft_strlen((char *)src) + 1;
	dst = NULL;
	dst = (char*)malloc(sizeof(char) * size);
	if (dst)
	{
		i = 0;
		while (src[i] != '\0')
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
		((unsigned char *)dst)[i] = '\0';
	}
	else
		return (NULL);
	return (dst);
}
