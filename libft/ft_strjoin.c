/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:54:05 by ramil             #+#    #+#             */
/*   Updated: 2020/11/11 17:24:50 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	dst = NULL;
	dst = malloc(sizeof(char) *
		(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1));
	if (dst)
	{
		while (s1[j] != '\0')
			dst[i++] = s1[j++];
		j = 0;
		while (s2[j] != '\0')
			dst[i++] = s2[j++];
		dst[i] = '\0';
		return (dst);
	}
	else
		return (NULL);
}
