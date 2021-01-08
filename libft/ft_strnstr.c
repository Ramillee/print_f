/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 19:01:52 by atweek            #+#    #+#             */
/*   Updated: 2020/11/21 18:34:32 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t count;
	size_t tmp;
	size_t i;

	count = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (count < len && haystack[count] != '\0')
	{
		i = 0;
		tmp = count;
		while (needle[i++] == haystack[tmp++] && tmp <= len)
		{
			if (needle[i] == '\0')
				return ((char *)&haystack[count]);
		}
		count++;
	}
	return (NULL);
}
