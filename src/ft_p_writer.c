/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_writer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 20:43:14 by atweek            #+#    #+#             */
/*   Updated: 2021/01/20 22:48:47 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

int p_processing_minus(t_pars *st_pars,int len, unsigned long long pointer)
{
	int count;
	int i;
	// len = hex_intlen(hex);
	// len = (len == 0) ? 1 : len;
	if ((st_pars->prec == 0 || (st_pars->prec == -1  && st_pars->dot == 1)))
		return (write(1,"0x",2));
	count = 0;
	i = 0;
	while (i++ < st_pars->prec - len)
		count +=write(1,"0",1);
	count += hex_convert(pointer,len,st_pars);
	// i += len;
	i = 0;
	while (i < st_pars->width - len && (i < st_pars->width - st_pars->prec))
	{
		if (st_pars->zero == 1)
			count += write(1,"0",1);
		else
			count +=write(1," ",1);
		i++;
	}
	return (count);
}

int p_processing(t_pars *st_pars, va_list argptr)
{
	int				i;
	unsigned long long	pointer;
	int count;
	int len;
	
	i = 0;
	count = 0;
	pointer = va_arg(argptr, unsigned long long);
	len = hex_intlen(pointer);
	len = (len == 0) ? 3 : len + 2;
	// if ((st_pars->prec == 0 || (st_pars->prec == -1  && st_pars->dot == 1)))
	// {
	// 	while (i++ < st_pars->width - len)
	// 		count += write(1," ", 1);
	// 	return (count);
	// }
	// if ((st_pars->prec == 0 || (st_pars->prec == -1  && st_pars->dot == 1)))
	// 	return (write(1,"0x",2));
	if (st_pars->prec != -1 && st_pars->zero == 1)
		st_pars->zero = -1;
	if (st_pars->prec == -1)
		st_pars->prec = 0;
	if (st_pars->width == -1)
		st_pars->width = 0;
	st_pars->prec = (st_pars->prec < len) ? st_pars->prec = 0 : st_pars->prec;
	if (st_pars->minus == 1)
	{
		return (p_processing_minus(st_pars,len,pointer));
	}
	// if (hex == 0)
	// 	return (x_processing_zero(st_pars))
	while (i < st_pars->width - len && (i < st_pars->width - st_pars->prec))
	{
		if (st_pars->zero == 1)
			count += write(1,"0",1);
		else
			count +=write(1," ",1);
		i++;
	}
	count += write(1,"0x",2);
	i = 0;
	while (i++ < st_pars->prec - len)
		count += write(1,"0",1);
	count += hex_convert(pointer,len,st_pars);
	return (count);
}