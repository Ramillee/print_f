/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_writer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 20:42:54 by atweek            #+#    #+#             */
/*   Updated: 2021/01/18 11:17:07 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

int	s_processing_util(t_pars *st_pars, char *str, int i, int count)
{
	int strlen;
	int all_len;

	strlen = ft_strlen(str);
	strlen = (st_pars->prec < strlen) ? st_pars->prec : strlen;
	all_len = (st_pars->width < strlen) ? strlen : st_pars->width;
	if (strlen == -1)
	{
		while (i++ < all_len)
			count += write(1, " ", 1);
	}
	else if (st_pars->minus == 1)
	{
		count += write(1, str, strlen);
		while (i++ < all_len - strlen)
			count += write(1, " ", 1);
	}
	else if (st_pars->zero == 1)
	{
		while (i++ < all_len - strlen)
			count += write(1, "0", 1);
		count += write(1, str, strlen);
	}
	else
	{
		while (i++ < all_len - strlen)
			count += write(1, " ", 1);
		count += write(1, str, strlen);
	}
	return (count);
}

int	s_processing(t_pars *st_pars, va_list argptr)
{
	int		i;
	char	*str;
	int		strlen;
	int		count;

	count = 0;
	i = 0;
	if (st_pars->type == 37)
		str = "%";
	else
		str = va_arg(argptr, char *);
	if (str == NULL)
		str = "(null)";
	strlen = (int)ft_strlen(str);
	if (st_pars->prec == -1 && st_pars->width == -1 && st_pars->dot == 1)
		return (0);
	if (st_pars->prec == -1 && st_pars->width == -1 && st_pars->dot == -1)
		count += write(1, str, strlen);
	if (st_pars->prec == -1 && st_pars->width != -1 && st_pars->dot == 1)
		while (i++ < st_pars->width)
			count += write(1, " ", 1);
	if (st_pars->prec == -1 && st_pars->width != -1 && st_pars->dot == -1)
		st_pars->prec = strlen;
	return (s_processing_util(st_pars, str, i, count));
}
