/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 15:55:23 by atweek            #+#    #+#             */
/*   Updated: 2021/01/08 16:59:16 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

typedef struct		s_pars
{
	int		zero;
	int		minus;
	int		width;
	int		prec;
}					t_pars;