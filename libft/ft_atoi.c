/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 23:43:47 by ramil             #+#    #+#             */
/*   Updated: 2020/11/21 16:10:01 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_minus_max(unsigned long long num, int minus)
{
	if (num > 9223372036854775807)
		return (minus ? 0 : -1);
	if (minus == 1)
		num *= -1;
	if (minus > 1)
		num = 0;
	return (num);
}

static int	move(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && ft_isspace_bonus((int)str[i]))
		i++;
	return (i);
}

int			ft_atoi(const char *str)
{
	int					i;
	int					minus;
	unsigned long long	num;

	minus = 0;
	num = 0;
	i = move((char *)str);
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			minus++;
	while (str[i] != '\0')
		if (ft_isdigit((int)str[i]))
			num = (num * 10) + (str[i++] - 48);
		else
			break ;
	return (check_minus_max(num, minus));
}
