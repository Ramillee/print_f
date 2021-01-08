/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 19:20:42 by atweek            #+#    #+#             */
/*   Updated: 2020/11/12 19:12:39 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int num)
{
	int	len;
	int	i;

	if (num == 0)
		return (1);
	i = num;
	len = 0;
	if (num < 0)
	{
		len++;
		num *= -1;
	}
	while (i != 0)
	{
		i /= 10;
		len++;
	}
	return (len);
}

static char	*max_or_null(int n, char *ch)
{
	if (n == 0)
		ft_strlcpy(ch, "0", 2);
	if (n == INT32_MIN)
		ft_strlcpy(ch, "-2147483648", 12);
	return (ch);
}

char		*ft_itoa(int num)
{
	int		len;
	char	*ch;
	int		n;

	n = num;
	len = ft_intlen(n);
	ch = malloc(sizeof(char) * (len + 1));
	if (ch)
	{
		if ((num == 0) || (num == INT32_MIN))
			return (max_or_null(n, ch));
		n = (n < 0) ? (n * -1) : n;
		ch[len--] = '\0';
		while (len != 0)
		{
			ch[len--] = (n % 10) + '0';
			n = n / 10;
		}
		ch[len] = (num < 0) ? '-' : (n % 10) + '0';
		return (ch);
	}
	else
		return (NULL);
}
