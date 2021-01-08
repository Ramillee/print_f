/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 15:48:01 by atweek            #+#    #+#             */
/*   Updated: 2021/01/08 17:52:07 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int parser(char *str,va_list *argptr)
{
	char *pstr;

	pstr = str;
	pstr++;
	int i;
	
	t_pars stract_pars;
	i = 0;
	while (i < 2)
	{
		if (*pstr == '0')
			stract_pars.zero = 1;
		else
			stract_pars.zero = 0;
		if(*pstr == '-')
			stract_pars.minus = 1;
		else
			stract_pars.minus = 0;
		pstr++;
		i++;
	}


	
	return ()
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
			count += write(1,&str[i],1);
		count += parser(&str[i],&argptr);
	}
	return (count);
}


int		ft_printf(const char *str, ...)
{
	int count;
	
	va_list argptr;
	va_start (argptr, str);
	//-------------
	
	count = pre_parser(str,&argptr);
	
	//-------------
	va_end(argptr);
	return (count);
}


int main(void)
{
	ft_printf("qweqe%0-", 1,2,3,4,5);
}