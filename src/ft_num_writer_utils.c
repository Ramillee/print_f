/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_writer_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 16:13:39 by atweek            #+#    #+#             */
/*   Updated: 2021/01/23 15:42:08 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

int	ft_intlen(int num)
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

int	num_zero(t_pars *st_pars)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (i++ < st_pars->width)
		count += write(1, " ", 1);
	return (count);
}

int	ft_longlen(unsigned long long int num)
{
	int						len;
	unsigned long long int	i;

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
