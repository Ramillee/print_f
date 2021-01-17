/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_processing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 20:33:05 by atweek            #+#    #+#             */
/*   Updated: 2021/01/17 20:44:15 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

int p_processing(t_pars *st_pars, va_list argptr)
{
	int		i;
	unsigned long long p;

	i = 0;
	p = va_arg(argptr, unsigned long long);
	
}