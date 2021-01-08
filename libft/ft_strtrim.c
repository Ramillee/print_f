/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 19:27:49 by ramil             #+#    #+#             */
/*   Updated: 2020/11/13 15:05:05 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_list(char const ch, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
		if (set[i] == ch)
			return (1);
		else
			i++;
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (check_list(s1[i], set) && (s1[i] != '\0'))
		i++;
	j = ft_strlen(s1) - 1;
	while (check_list(s1[j], set) && (j > i))
		j--;
	if ((s1[i] == '\0') || (i > j))
		return (ft_substr("", 0, 1));
	return (ft_substr(s1, i, j - i + 1));
}
