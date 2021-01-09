/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 16:24:07 by atweek            #+#    #+#             */
/*   Updated: 2021/01/09 17:13:35 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

int parser(const char *str,va_list *argptr)
{
	char *pstr;

	pstr = (char *) str;
	pstr++;
	t_pars stract_pars;
	stract_pars.zero = 0;
	stract_pars.minus = 0;
	while (*pstr == '-' || *pstr == '0')
	{
		if (*pstr == '0')
			stract_pars.zero = 1;
		if(*pstr == '-')
			stract_pars.minus = 1;
		pstr++;
	}
	if (stract_pars.minus == 1)
		stract_pars.zero = 0;
	while (*pstr != '.')
		pstr ++;
	if (stract_pars.minus == 1)
		stract_pars.width = va_arg(argptr, int);
	return (pstr - str);
}

int pre_parser(const char *str,va_list *argptr)
{
	int i;
	int count;
	
	i = 0;
	count = 0;
	while(str[i])
	{
		while (str[i] != '%')
			count += write(1,&str[i++],1);
		count += parser(&str[i++],&argptr);
	}
	return (count);
}