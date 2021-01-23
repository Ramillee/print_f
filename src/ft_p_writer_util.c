/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_writer_util.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 18:53:34 by atweek            #+#    #+#             */
/*   Updated: 2021/01/23 18:57:08 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

int	preparation(t_pars *st_pars, int len)
{
	if (st_pars->prec != -1 && st_pars->zero == 1)
		st_pars->zero = -1;
	if (st_pars->prec == -1)
		st_pars->prec = 0;
	if (st_pars->width == -1)
		st_pars->width = 0;
	st_pars->prec = (st_pars->prec < len) ? 0 : st_pars->prec;
	return (0);
}

int	part_write(t_pars *st_pars, int len)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (i < st_pars->width - len && (i < st_pars->width - st_pars->prec))
		if (++i && st_pars->zero == 1)
			count += write(1, "0", 1);
		else
			count += write(1, " ", 1);
	count += write(1, "0x", 2);
	return (count);
}
