/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_writer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 16:22:00 by atweek            #+#    #+#             */
/*   Updated: 2021/01/14 21:36:56 by atweek           ###   ########.fr       */
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

int		d_i_processing(t_pars *st_pars, va_list argptr)
{
	int		i;
	int		num;
	int		numlen;
	int		all_len;
	int		count;
	
	count = 0;
	i = 0;
	all_len = 0;
	num = va_arg(argptr,int);
	numlen = ft_intlen(num);
	if (st_pars->minus == 1)
	{
		ft_putnbr_fd(num,1);
		count += numlen;
		while (i++ < st_pars->width - numlen)
			count += write(1," ",1);
	}
	else if(st_pars->prec > numlen)
	{
		if (num < 0)
		{
			count += write(1,"-",1);
			while (i++ < st_pars->prec - numlen + 1)
				count += write(1,"0",1);
			ft_putnbr_fd(num * -1, 1);
			count += numlen - 1;
		}
		else if(st_pars->width > st_pars->prec)
		{
			while (i++ < st_pars->width - st_pars->prec)
				count += write(1," ",1);
			i = 0;
			while (i++ < st_pars->prec - numlen)
				count += write(1,"0",1);
			ft_putnbr_fd(num,1);
			count += numlen;
		}
		else
		{
			while (i++ < st_pars->prec - numlen)
				count += write(1,"0",1);
			ft_putnbr_fd(num,1);
			count += numlen;
		}
	
	}
	else if(st_pars->width > numlen)
	{
		if (st_pars->zero == -1)
		{
			while (i++ < st_pars->width - numlen)
				count += write(1," ",1);
			ft_putnbr_fd(num,1);
			count += numlen;
		}
		else
		{
			if (num >= 0)
			{
				while (i++ < st_pars->width - numlen)
					count += write(1,"0",1);
				ft_putnbr_fd(num,1);
				count += numlen;
			}
			else
			{
				count += write(1,"-",1);
				while (i++ < st_pars->width - numlen)
					count += write(1,"0",1);
				ft_putnbr_fd(num * -1,1);
				count += numlen - 1;
			}
			
		}
	}
	else if (st_pars->prec < 0 && st_pars->prec != -1)
	{
		count += write(1,"-",1);
		while (i++ < st_pars->width - numlen - 1)
			count += write(1," ",1);
		ft_putnbr_fd(num * -1, 1);
		count += numlen - 1;
	}
	else
	{
		ft_putnbr_fd(num,1);
		count+= numlen;
	}
	return (count);
}