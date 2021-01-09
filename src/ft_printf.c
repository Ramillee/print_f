/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 15:48:01 by atweek            #+#    #+#             */
/*   Updated: 2021/01/09 18:21:25 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include "../libft/libft.h"


int		ft_printf(const char *str, ...)
{
	int count;
	
	va_list argptr;
	va_start (argptr, str);
	//-------------
	
	count = pre_parser(str,argptr);
	
	//-------------
	va_end(argptr);
	return (count);
}


int main(void)
{
	ft_printf("qweqe%0-*.*d", 10,10,10);
}