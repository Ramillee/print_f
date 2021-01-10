/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 15:55:23 by atweek            #+#    #+#             */
/*   Updated: 2021/01/10 23:59:27 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

#include <stdio.h>

typedef struct		s_pars
{
	int		zero;
	int		minus;
	int		width;
	int		prec;
	int		type;
}					t_pars;

int	ft_printf(const char *str, ...);
int parser(const char *str,va_list argptr);
int pre_parser(const char *str,va_list argptr);
int	check_flags(t_pars *st_pars,const char *str);
int	check_width(t_pars *st_pars,va_list argptr,const char *str);
int check_prec(t_pars *st_pars,va_list argptr,const char *str);