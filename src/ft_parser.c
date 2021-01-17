/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 16:24:07 by atweek            #+#    #+#             */
/*   Updated: 2021/01/17 20:01:22 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

int	check_type(t_pars *st_pars, const char *str)
{
	st_pars->type = (int)*str;
	return (1);
}

int	check_flags(t_pars *st_pars, const char *str)
{
	int i;

	i = 1;
	while ((str[i] == '-') || str[i] == '0')
	{
		if (str[i] == '-')
			st_pars->minus = 1;
		if (str[i] == '0')
			st_pars->zero = 1;
		i++;
	}
	return (i);
}

int	check_prec(t_pars *st_pars, va_list argptr, const char *str)
{
	int i;
	int num;

	i = 0;
	st_pars->dot = (str[i] == '.') ? 1 : st_pars->dot;
	(str[i] == '.') ? i++ : i;
	if (str[i] == '*')
	{
		num = va_arg(argptr, int);
		if (num >= 0)
			st_pars->prec = num;
		else
		{
			st_pars->prec = num * -1;
			st_pars->minus = 1;
		}
		i++;
	}
	else if (ft_isdigit(str[i]))
		st_pars->prec = ft_atoi(&str[i]);
	else
		return (i);
	while (ft_isdigit(str[i]))
		i++;
	return ((st_pars->prec >= 0) ? i : 0);
}

int	check_width(t_pars *st_pars, va_list argptr, const char *str)
{
	int i;
	int num;

	i = 0;
	if (str[i] == '*')
	{
		num = va_arg(argptr, int);
		if (num >= 0)
			st_pars->width = num;
		else
		{
			st_pars->width = num * -1;
			st_pars->minus = 1;
		}
		i++;
	}
	else if (ft_isdigit(str[i]))
		st_pars->width = ft_atoi(&str[i]);
	while (ft_isdigit(str[i]))
		i++;
	return (i);
}

int	parser(const char *str, va_list argptr,t_pars	*st_pars)
{
	int		text_shift;

	text_shift = 0;
	st_pars->minus = -1;
	st_pars->zero = -1;
	st_pars->width = -1;
	st_pars->prec = -1;
	st_pars->type = -1;
	st_pars->dot = -1;
	text_shift = check_flags(st_pars, str);
	text_shift += check_width(st_pars, argptr, &str[text_shift]);
	text_shift += check_prec(st_pars, argptr, &str[text_shift]);
	text_shift += check_type(st_pars, &str[text_shift]);
	return (text_shift);
}
