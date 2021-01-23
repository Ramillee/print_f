/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 15:48:01 by atweek            #+#    #+#             */
/*   Updated: 2021/01/23 18:59:42 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

int	pre_parser(const char *str, va_list argptr)
{
	int		i;
	int		count;
	t_pars	st_pars;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '%')
			count += write(1, &str[i++], 1);
		else
		{
			i += parser(&str[i], argptr, &st_pars);
			count += line_processing(&st_pars, argptr);
			if (count == -1)
				return (-1);
		}
	}
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list argptr;

	va_start(argptr, str);
	if (str == NULL)
		return (write(1, "(null)", 6));
	count = pre_parser(str, argptr);
	va_end(argptr);
	return (count);
}
