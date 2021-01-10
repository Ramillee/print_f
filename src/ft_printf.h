/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 15:55:23 by atweek            #+#    #+#             */
/*   Updated: 2021/01/10 20:02:47 by atweek           ###   ########.fr       */
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

int		ft_printf(const char *str, ...);
int parser(const char *str,va_list argptr);
int pre_parser(const char *str,va_list argptr);
