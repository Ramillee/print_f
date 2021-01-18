/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 15:55:23 by atweek            #+#    #+#             */
/*   Updated: 2021/01/18 11:59:52 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
#endif

typedef struct		s_pars
{
	int		zero;
	int		minus;
	int		width;
	int		prec;
	int		type;
	int		dot;
}					t_pars;

int					ft_printf(const char *str, ...);
int					parser(const char *str, va_list argptr,t_pars	*st_pars);
int					pre_parser(const char *str, va_list argptr);
int					check_flags(t_pars *st_pars, const char *str);
int					check_width(t_pars *st_pars, va_list argptr,
					const char *str);
int					check_prec(t_pars *st_pars, va_list argptr,
					const char *str);
int					line_processing(t_pars *st_pars, va_list argptr);
int					c_processing(t_pars *st_pars, va_list argptr);
int					s_processing(t_pars *st_pars, va_list argptr);
int					d_i_processing(t_pars *st_pars, va_list argptr);
int					ft_intlen(int num);
int					p_processing(t_pars *st_pars, va_list argptr);
int					num_zero(t_pars *st_pars);
char  				*hex_convert(int num, int flag);
