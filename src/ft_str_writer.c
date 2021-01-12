/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_writer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 20:42:54 by atweek            #+#    #+#             */
/*   Updated: 2021/01/12 22:38:26 by atweek           ###   ########.fr       */
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
	str = va_arg(argptr,char *);
	strlen = ft_strlen(str);
	(st_pars->prec < strlen) ? strlen = st_pars->prec : strlen;
	(strlen > st_pars->width) ? all_len = strlen : all_len = st_pars->width;
	
	if (st_pars->minus == 1)
	{
		write(1,str,strlen);
		write(1,str,all_len - strlen);
	}
	else
	{
		write(1,str,all_len - strlen);
		write(1,str,strlen);
	}
	return (all_len);
}
