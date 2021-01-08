/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 19:59:29 by ramil             #+#    #+#             */
/*   Updated: 2020/11/17 18:23:28 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	amount_c(char const *s, char c)
{
	int	i;
	int amount;

	i = 0;
	amount = 0;
	while (s[i])
	{
		if ((s[i] == c) && (s[i + 1] != c) && (s[i + 1] != '\0'))
		{
			amount++;
			i++;
		}
		else
			i++;
	}
	return (amount + 2);
}

static char	**free_split(char **dst, int dst_i)
{
	int i;

	i = 0;
	while (i < dst_i - 1)
	{
		free(dst[i]);
		dst[i++] = NULL;
	}
	free(dst);
	dst = NULL;
	return (NULL);
}

static char	**make_split(char **dst, char c, char const *s)
{
	int		i;
	int		j;
	int		dst_i;

	i = 0;
	j = 0;
	dst_i = 0;
	while (s[j] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		j = i;
		while ((s[j] != c) && (s[j] != '\0'))
			j++;
		dst[dst_i] = ft_substr(s, i, j - i);
		if (!dst[dst_i++])
			return (free_split(dst, dst_i));
		i = j;
	}
	dst[dst_i] = NULL;
	return (dst);
}

char		**ft_split(char const *s, char c)
{
	char	**dst;

	if ((s) && (dst = malloc(sizeof(char *) * (amount_c(s, c)))))
	{
		return (make_split(dst, c, s));
	}
	return (NULL);
}
