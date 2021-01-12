/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 14:33:51 by atweek            #+#    #+#             */
/*   Updated: 2021/01/12 00:01:19 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

/* It will manage the following conversions: cspdiuxX% */

int		line_processing(t_pars *st_pars, va_list argptr)
{
	int count;
	
	count = 0;
	if (st_pars->type == 'c')
		count = c_processing(st_pars,argptr);
	if (st_pars->type == 's')
		count = s_processing(st_pars,argptr);
	// if (st_pars->type == 'p')
	// 	//p
	// if ((st_pars->type == 'd') || st_pars->type == 'i')
	// 	//di
	// if ((st_pars->type == 'X') || (st_pars->type == 'x'))
	// 	//Xx
	// if (st_pars->type == 'u')
	// 	//u
	// if (st_pars->type == '%')
	// 	//%
	return (count);
}

int		c_processing(t_pars *st_pars, va_list argptr)
{
	int i;
	char	c;
	
	i = 1;
	c = va_arg(argptr,int);
	if (st_pars->width == -1)
		return(write(1,&c,1));
	if (st_pars->minus == 1)
	{
		write(1,&c,1);
		while (i++ < st_pars->width)
			write(1," ",1);
		return(1);
	}
	if (st_pars->zero == 1)
	{
		while (i++ < st_pars->width)
			write(1,"0",1);
		return(write(1,&c,1));
	}
	if (st_pars->zero == 0 && st_pars->minus == 0)
	{
		while (i++ < st_pars->width)
			write(1," ",1);
		return(write(1,&c,1));
	}
	if (st_pars->zero == -1 && st_pars->minus == -1)
		return(write(1,&c,1));
	return (i);
}

int		s_processing(t_pars *st_pars, va_list argptr)
{
	int		i;
	char	*str;
	int		strlen;
	
	i = 0;
	str = va_arg(argptr,char *);
	strlen = ft_strlen(str);
	// printf("--%s--\n",str);
	if (st_pars->minus == 1)
	{
		if (st_pars->prec != -1 && st_pars->width != -1)
		{
			while (i < st_pars->prec)
				write(1,&str[i++],1);
			while (i++ < st_pars->width)
				write(1," ",1);
			return (st_pars->width);
		}
		else
		{
			write(1,str,ft_strlen(str));
			return(ft_strlen(str));
		}
		
	}
	if (st_pars->zero == 1)
	{
		if (st_pars->prec != -1 && st_pars->width != -1)
		{
		while (i++ < st_pars->width)
			write(1,"0",1);
		while (i < st_pars->prec)
			write(1,&str[i++],1);
		return (st_pars->width);
		}
		else
		{
			write(1,str,ft_strlen(str));
			return(ft_strlen(str));
		}
	}
	if (st_pars->zero == -1 && st_pars->minus == -1)
	{
		write(1,str,ft_strlen(str));
		return(ft_strlen(str));
	}
	return (st_pars->width);
}