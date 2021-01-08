/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 15:48:01 by atweek            #+#    #+#             */
/*   Updated: 2021/01/08 17:29:24 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int parser(char *str,va_list *argptr)
{
	str++;
	int i;
	
	i = 0;
	while (i < 2)
	{
		if (*str == '0')
			t_pars.zero = 1;
		else
			t_pars.zero = 0;
		if(*str == '-')
			t_pars.minus = 1;
		else
			t_pars.minus = 0;
		str++;
		i++;
	}
}

int pre_parser(char *str,va_list *argptr)
{
	int i;
	int count;
	
	i = 0;
	count = 0;
	while(str[i])
	{
		while (str[i] != '%')
			count += write(1,&str[i])
		count += int parser(&str[i],&argptr)
	}
}


int		ft_printf(const char *str, ...)
{
	int count;
	
	va_list argptr;
	va_start (argptr, str);
	//-------------
	
	count = parse(str,&argptr);
	
	//-------------
	va_end(argptr);
	return (count);
}


int main(void)
{
	ft_printf("*****", 1,2,3,4,5);
}