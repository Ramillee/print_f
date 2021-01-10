/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 16:24:07 by atweek            #+#    #+#             */
/*   Updated: 2021/01/11 00:58:11 by atweek           ###   ########.fr       */
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

int check_type(t_pars *st_pars,const char *str)
{
	st_pars->type = (int) *str;
	return (1);
}

int	check_flags(t_pars *st_pars,const char *str)
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


int check_prec(t_pars *st_pars,va_list argptr,const char *str)
{
	int i;
	int num;

	i = 1;
	if (str[i] == '*')
	{
		num = va_arg(argptr,int);
		if (num >= 0)
			st_pars->prec = num;
		else
		{
			st_pars->prec = num * -1;
			st_pars->minus = 1;
		}
		i++;
	}
	else
		st_pars->prec = ft_atoi(str);
	while (ft_isdigit(str[i]))
	{
		i++;
	}
	return (i);
}

int	check_width(t_pars *st_pars,va_list argptr,const char *str)
{
	int i;
	int num;

	i = 0;
	if (str[i] == '*')
	{
		num = va_arg(argptr,int);
		if (num >= 0)
			st_pars->width = num;
		else
		{
			st_pars->width = num * -1;
			st_pars->minus = 1;
		}
		i++;
	}
	else
		st_pars->width = ft_atoi(str);
	while (ft_isdigit(str[i]))
	{
		i++;
	}
	
	return (i);
}

int parser(const char *str,va_list argptr)
{
	int text_shift;
	t_pars st_pars;

	st_pars.minus=0;
	st_pars.zero=0;
	st_pars.width=0;
	st_pars.prec=0;
	st_pars.type=0;
	text_shift = check_flags(&st_pars,str);
	text_shift += check_width(&st_pars,argptr,&str[text_shift]);
	text_shift += check_prec(&st_pars,argptr,&str[text_shift]);
	text_shift += check_type(&st_pars,&str[text_shift]);

	printf("zero -> %d\n",st_pars.zero);
	printf("minus -> %d\n",st_pars.minus);
	printf("prec -> %d\n",st_pars.prec);
	printf("width -> %d\n",st_pars.width);
	printf("type -> %d\n",st_pars.type);
	return (text_shift);
}
