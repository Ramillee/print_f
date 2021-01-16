/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_writer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 16:22:00 by atweek            #+#    #+#             */
/*   Updated: 2021/01/16 05:33:04 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

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


// int write_zero(int len)
// {
// 	int i;
	
// 	i = 0;
// 	while (i++ < len)
// 		write(1,"0",1);
// 	return (len);
// }

// int write_space(int len)
// {
// 	int i;
// 	int count;
	
// 	count = 0;
// 	i = 0;
// 	while (i++ < len)
// 		count += write(1," ",1);
// 	return(len);
// }

int ft_minus_flag(int num,int numlen,t_pars *st_pars)
{
	int count;
	int i;
	int module_num;

	// module_num = (num < 0) ? num * -1 : num;
	i = 0;
	count = 0;
	// if (st_pars->width <= numlen)
	// {
	// 	ft_putnbr_fd(num,1);
	// 	return (numlen);
	// }
	if (num < 0)
	{
		// num *= -1;
		count += write(1,"-",1);
		i++;
	}
	while (i < (st_pars->prec - numlen) && (st_pars->prec != -1))
	{
		count += write(1,"0",1);
		i++;	
	}
	ft_putnbr_fd(module_num,1);
	count += ft_intlen(module_num); //хрень
	i += numlen;
	while (i++ < st_pars->width)
		count += write(1," ",1);
	return (count);
}

int is_prec(int num,int numlen,t_pars *st_pars)
{
	int count;
	int i;

	i = 0;
	count = 0;
	st_pars->width = (num < 0) ? st_pars->width - 1: st_pars->width;
	if (st_pars->prec < numlen)
	{
		ft_putnbr_fd(num,1);
		return (numlen);
	}
	while ((i < st_pars->width - st_pars->prec) && st_pars->width != -1)
	{
		count += write(1," ",1);
		i ++;
	}
	i = 0;
	if (num < 0)
	{
		num *= -1;
		count += write(1,"-",1);
		st_pars->prec += 1;
		// st_pars->prec++;
	}
	while (i < (st_pars->prec - numlen) && (st_pars->prec != -1))
	{
		count += write(1,"0",1);
		i++;
	}
	ft_putnbr_fd(num,1);
	count += numlen;
	i += numlen;
	return (count);
}

int ft_flag_null(int num,int numlen,t_pars *st_pars)
{
	int count;
	int i;

	i = 0;
	count = 0;
	// st_pars->width = (num < 0) ? st_pars->width - 1: st_pars->width;
	if (num < 0)
	{
		num *= -1;
		count += write(1,"-",1);
		// st_pars->prec += 1;
	}
	while (i < st_pars->width - numlen && st_pars->width != -1)
	{
		write(1,"0",1);
		i ++;	
	}
	ft_putnbr_fd(num,1);
	count += numlen;
	return (count);
}

int only_width(int num,int numlen,t_pars *st_pars)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (i < st_pars->width - numlen)
	{
		count += write(1," ",1);
		i ++;	
	}
	ft_putnbr_fd(num,1);
	count += numlen;
	return (count);
}

int		d_i_processing(t_pars *st_pars, va_list argptr)
{
	int		i;
	int		num;
	int		numlen;
	int		count;
	char	zere_or_space;

	i = 0;
	count = 0;
	zere_or_space = '0';
	num = va_arg(argptr,int);
	numlen = ft_intlen(num);
	if (st_pars->dot == 1 && st_pars->prec == -1)
		st_pars->prec = 0;
	if (st_pars->minus == 1 && st_pars->zero == 1)
		st_pars->zero = -1;
	//----------------------------------------------------------------
	if (st_pars->minus != -1 || (st_pars->width < 0 && st_pars->width != -1))
	{
		count += ft_minus_flag(num,numlen,st_pars);
	}
	else if (st_pars->prec != -1)
	{
		count += is_prec(num,numlen,st_pars);
	}
	else if (st_pars->zero == 1)
	{
		count += ft_flag_null(num,numlen,st_pars);
	}
	else if (st_pars->width != -1)
	{
		count += only_width(num,numlen,st_pars);
	}
	else
	{
		ft_putnbr_fd(num,1);
		count += numlen;
	}
	
	return (count);
}


