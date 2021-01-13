/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 16:24:07 by atweek            #+#    #+#             */
/*   Updated: 2021/01/13 18:23:29 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"
#include "../libft/libft.h"

/*	%[флаги] [ширина] [.точность] [F|N|h|l|L] type     */
/*	Каждая спецификация  начинается с символа процента */
/*	(%). После процента следуют признаки в порядке:    */
/*	- необязательная    последовательность     [flags] */
/*	символов-флагов;								   */
/*	- необязательная спецификация [width] ширины;      */
/*	- необязательная спецификация [.prec] точности;    */
/*	- необязательный  модификатор [F|N|h|l|L] входного */
/*	размера;										   */
/*	- символ типа преобразования [type].			   */

int check_type(t_pars *st_pars, const char *str)
{
	// printf("type --> %s\n",str);
	st_pars->type = (int) *str;
	// printf("type2 %d\n",st_pars->type);
	return (1);
}

int	check_flags(t_pars *st_pars, const char *str)
{
	int i;
	// printf("flag --> %s\n",str);

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


int check_prec(t_pars *st_pars, va_list argptr, const char *str)
{
	int i;
	int num;

	// printf("prec --> %s\n",str);
	i = 0;
	st_pars->dot = (str[i] == '.') ? 1 : st_pars->dot;
	(str[i] == '.') ? i++ : i;
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
	else if (ft_isdigit(str[i]))
		st_pars->prec = ft_atoi(&str[i]);
	else
		return(i);
	while (ft_isdigit(str[i]))
	{
		i++;
	}
	return ((st_pars->prec >= 0) ? i : 0);
}

int	check_width(t_pars *st_pars, va_list argptr, const char *str)
{
	int i;
	int num;

	// printf("width --> %s\n",str);
	i = 0;
	if (str[i] == '*')
	{
		num = va_arg(argptr,int);
		if (num >= 0)
			st_pars->width = num;
		else
		{
			st_pars->width != -1 ? st_pars->width = num * -1 : -1;
			st_pars->minus = 1;
		}
		i++;
	}
	else if (ft_isdigit(str[i]))
		st_pars->width = ft_atoi(&str[i]);
	while (ft_isdigit(str[i]))
	{
		i++;
	}
	return (i);
}

int parser(const char *str,va_list argptr)
{
	int 	text_shift;
	int		count;
	t_pars st_pars;

	text_shift = 0;
	st_pars.minus=-1;
	st_pars.zero=-1;
	st_pars.width=-1;
	st_pars.prec=-1;
	st_pars.type=-1;
	st_pars.dot=-1;
	text_shift = check_flags(&st_pars,str);
	text_shift += check_width(&st_pars,argptr,&str[text_shift]);
	text_shift += check_prec(&st_pars,argptr,&str[text_shift]);
	text_shift += check_type(&st_pars,&str[text_shift]);
	// printf("----------------------------------\n");
	// printf("zero -> %d\n",st_pars.zero);
	// printf("minus -> %d\n",st_pars.minus);
	// printf("prec -> %d\n",st_pars.prec);
	// printf("width -> %d\n",st_pars.width);
	// printf("type -> %d\n",st_pars.type);
	// printf("dot -> %d\n",st_pars.dot);
	// printf("----------------------------------\n");
	count = line_processing(&st_pars,argptr);
	return (text_shift);
}
