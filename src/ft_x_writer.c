/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_writer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 20:33:05 by atweek            #+#    #+#             */
/*   Updated: 2021/01/23 22:18:31 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

int		hex_convert(unsigned int hex, int len, t_pars *st_pars)
{
	int		count;
	int		mod;
	char	str[len + 1];
	int		i;

	if (hex == 0)
		return (write(1, "0", 1));
	i = 0;
	count = 0;
	while (hex > 0)
	{
		mod = hex % 16;
		hex = hex / 16;
		str[i++] = (st_pars->type == 'X') ? "0123456789ABCDEF"[mod] :
										"0123456789abcdef"[mod];
	}
	str[i--] = '\0';
	while (i >= 0)
		count += write(1, &str[i--], 1);
	return (count);
}

int		x_processing_minus(t_pars *st_pars, int len, int num)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (i++ < st_pars->prec - len)
		count += write(1, "0", 1);
	if (st_pars->type == 'u')
	{
		ft_putnbr_unsigned(1, num);
		count += len;
	}
	else
		count += hex_convert(num, len, st_pars);
	i = 0;
	while (i < st_pars->width - len && (i < st_pars->width - st_pars->prec))
	{
		if (st_pars->zero == 1)
			count += write(1, "0", 1);
		else
			count += write(1, " ", 1);
		i++;
	}
	return (count);
}

int		x_processing(t_pars *st_pars, va_list argptr)
{
	int				i;
	unsigned int	num;
	int				count;

	i = 0;
	count = 0;
	num = va_arg(argptr, unsigned int);
	if (st_pars->type == 'u')
		st_pars->strlen = ft_longlen((unsigned long long int)num);
	else
		st_pars->strlen = hex_intlen(num);
	if ((st_pars->prec == 0 || (st_pars->prec == -1 && st_pars->dot == 1)))
	{
		while (i++ < st_pars->width)
			count += write(1, " ", 1);
		return (count);
	}
	x_if(st_pars);
	st_pars->strlen = (st_pars->strlen == 0) ? 1 : st_pars->strlen;
	st_pars->prec = (st_pars->prec < st_pars->strlen) ? 0 : st_pars->prec;
	count += x_if_if(st_pars, i, count, num);
	return (count);
}

void	x_if(t_pars *st_pars)
{
	if (st_pars->prec != -1 && st_pars->zero == 1)
		st_pars->zero = -1;
	if (st_pars->prec == -1)
		st_pars->prec = 0;
	if (st_pars->width == -1)
		st_pars->width = 0;
}

int		x_if_if(t_pars *st_pars, int i, int count, unsigned int num)
{
	if (st_pars->minus == 1)
	{
		return (x_processing_minus(st_pars, st_pars->strlen, num));
	}
	while (i < st_pars->width - st_pars->strlen &&
			(i < st_pars->width - st_pars->prec))
	{
		if (st_pars->zero == 1)
			count += write(1, "0", 1);
		else
			count += write(1, " ", 1);
		i++;
	}
	i = 0;
	while (i++ < st_pars->prec - st_pars->strlen)
		count += write(1, "0", 1);
	if (st_pars->type == 'u')
	{
		ft_putnbr_unsigned(1, num);
		count += st_pars->strlen;
	}
	else
		count += hex_convert(num, st_pars->strlen, st_pars);
	return (count);
}
