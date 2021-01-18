/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_processing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 14:33:51 by atweek            #+#    #+#             */
/*   Updated: 2021/01/18 11:34:42 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

int		line_processing(t_pars *st_pars, va_list argptr)
{
	int count;

	count = 0;
	if (st_pars->type == 'c')
		count = c_processing(st_pars, argptr);
	if (st_pars->type == 's')
		count = s_processing(st_pars, argptr);
	if ((st_pars->type == 'd') || st_pars->type == 'i' || st_pars->type == '%')
		count = s_processing(st_pars, argptr);
	// if (st_pars->type == 'p')
		// count = p_processing(st_pars, argptr);
	return (count);
}

int		c_processing(t_pars *st_pars, va_list argptr)
{
	int		i;
	char	c;

	i = 0;
	c = va_arg(argptr, unsigned int);
	if (st_pars->width != -1)
	{
		if (st_pars->minus == -1)
		{
			while (++i < st_pars->width)
				write(1, " ", 1);
			write(1, &c, 1);
		}
		else
		{
			write(1, &c, 1);
			while (++i < st_pars->width)
				write(1, " ", 1);
		}
	}
	else
		write(1, &c, 1);
	return (((st_pars->width == -1) ? 1 : st_pars->width));
}