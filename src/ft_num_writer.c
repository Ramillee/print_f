/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_writer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 16:22:00 by atweek            #+#    #+#             */
/*   Updated: 2021/01/23 05:03:49 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

int	ft_minus_flag(long long num, int numlen, t_pars *st_pars)
{
	int count;
	int i;
	// long long long_int;

	i = 0;
	count = 0;
	if (num == 0 && st_pars->prec == 0)
		return (num_zero(st_pars));
	if (num < 0)
	{
		num *= -1;
		count += write(1, "-", 1);
	}
	while (i < (st_pars->prec - ft_intlen(num)) && (st_pars->prec != -1) && ++i)
		count += write(1, "0", 1);
	ft_putnbr_fd(num, 1);
	count += ft_longlen(num);
	i += numlen;
	while (i < st_pars->width && i++)
		count += write(1, " ", 1);
	return (count);
}

int	is_prec(int num, int numlen, t_pars *st_pars)
{
	int count;
	int i;
	int flag;

	i = 0;
	count = 0;
	flag = (num < 0) ? 1 : 0;
	if (num == 0 && st_pars->prec == 0)
		return (num_zero(st_pars));
	while ((i < st_pars->width - st_pars->prec - flag) &&
		(i < st_pars->width - numlen) && st_pars->width != -1 && ++i)
		count += write(1, " ", 1);
	i = 0;
	if (num < 0)
	{
		num *= -1;
		count += write(1, "-", 1);
		st_pars->prec += 1;
	}
	while (i < (st_pars->prec - numlen) && (st_pars->prec != -1) && ++i)
		count += write(1, "0", 1);
	ft_putnbr_fd(num, 1);
	return (ft_intlen(num) + count);
}

int	ft_flag_zero(int num, int numlen, t_pars *st_pars)
{
	int count;
	int i;

	i = 0;
	count = 0;
	if (num < 0)
	{
		num *= -1;
		count += write(1, "-", 1);
	}
	while (i < st_pars->width - numlen && st_pars->width != -1 && ++i)
		count += write(1, "0", 1);
	ft_putnbr_fd(num, 1);
	count += ft_intlen(num);
	return (count);
}

int	only_width(int num, int numlen, t_pars *st_pars)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (i < st_pars->width - numlen)
	{
		count += write(1, " ", 1);
		i++;
	}
	ft_putnbr_fd(num, 1);
	count += numlen;
	return (count);
}

int	d_i_processing(t_pars *st_pars, va_list argptr)
{
	int		num;
	int		numlen;
	int		count;

	count = 0;
	num = va_arg(argptr, int);
	numlen = ft_intlen(num);
	if (st_pars->dot == 1 && st_pars->prec == -1 && st_pars->prec < 0)
		st_pars->prec = 0;
	if (st_pars->minus == 1 && st_pars->zero == 1)
		st_pars->zero = -1;
	if (st_pars->minus != -1 || (st_pars->width < 0 && st_pars->width != -1))
		count += ft_minus_flag(num, numlen, st_pars);
	else if (st_pars->prec != -1)
		count += is_prec(num, numlen, st_pars);
	else if (st_pars->zero == 1)
		count += ft_flag_zero(num, numlen, st_pars);
	else if (st_pars->width != -1)
		count += only_width(num, numlen, st_pars);
	else
	{
		ft_putnbr_fd(num, 1);
		count += numlen;
	}
	return (count);
}
