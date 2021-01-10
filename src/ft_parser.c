/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 16:24:07 by atweek            #+#    #+#             */
/*   Updated: 2021/01/10 20:43:27 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

/*
	%[флаги] [ширина] [.точность] [F|N|h|l|L] type
	Каждая спецификация  начинается с символа процента
	(%). После процента следуют признаки в порядке:
	- необязательная    последовательность     [flags]
	символов-флагов;
	- необязательная спецификация [width] ширины;
	- необязательная спецификация [.prec] точности;
	- необязательный  модификатор [F|N|h|l|L] входного
	размера;
	- символ типа преобразования [type].
*/

int null_struct(t_pars *st_pars)
{
	st_pars->minus=0;
	st_pars->zero=0;
	st_pars->width=0;
	st_pars->prec=0;
	st_pars->type=0;
	return (0);
}

int	check_flags(t_pars *st_pars,va_list argptr,const char *str)
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

check_width(t_pars *st_pars,va_list argptr,const char *str)
{
	int i;
	int j;
	char *str_num[ft_strlen(str)];

	i = 0;
	j = 0;
	if (str[i] == '*')
		st_pars->width = va_arg(argptr,int);//если - то + а минус флаг
	else
		while (ft_isdigit(str[i]) )
			i++;
	ft_strlcpy(str_num,str,i);
	st_pars->width = ft_atoi(str_num);
	return (i);
}

int parser(const char *str,va_list argptr)
{
	int text_shift;
	// (void) str;
	// (void) argptr;
	t_pars st_pars;
	
	null_struct(&st_pars);
	text_shift = check_flags(&st_pars,argptr,str);
	check_width(&st_pars,argptr,&str[text_shift]);
	return (0);
}

int pre_parser(const char *str,va_list argptr)
{
	int i;
	int count;
	
	i = 0;
	count = 0;
	while(str[i] != '\0')
	{
		if (str[i] != '%')
			count += write(1,&str[i],1);
		else
			count += parser(&str[i],argptr);
		i++;
	}
	return (count);
}