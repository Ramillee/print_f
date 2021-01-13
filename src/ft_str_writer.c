/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_writer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 20:42:54 by atweek            #+#    #+#             */
/*   Updated: 2021/01/13 18:53:46 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

int		s_processing(t_pars *st_pars, va_list argptr)
{
	int		i;
	char	*str;
	int		strlen;
	int		all_len;
	
	i = 0;
	all_len = 0;
	str = va_arg(argptr,char *);
	strlen = (int) ft_strlen(str);
	if (st_pars->prec == -1 && st_pars->width == -1 && st_pars->dot == 1)
		return (0);
	if (st_pars->prec == -1 && st_pars->width == -1 && st_pars->dot == -1)
		write(1,str,strlen);
	if (st_pars->prec == -1 && st_pars->width != -1 && st_pars->dot == 1)
		while (i++ < st_pars->width)
			write(1," ",1);
	if (st_pars->prec == -1 && st_pars->width != -1 && st_pars->dot == -1)
		st_pars->prec = strlen;
	strlen = (st_pars->prec < strlen) ? st_pars->prec : strlen;
	all_len = (st_pars->width < strlen) ? strlen : st_pars->width;
	if (strlen == -1)
	{
		while (i++ < all_len)
		write(1," ",1);
	}
	else if (st_pars->minus == 1)
	{
		write(1,str,strlen);
		while (i++ < all_len - strlen)
			write(1," ",1);
	}
	else
	{
		while (i++ < all_len - strlen)
			write(1," ",1);
		write(1,str,strlen);
	}
	return (all_len);
}
