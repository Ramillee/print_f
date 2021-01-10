/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 15:48:01 by atweek            #+#    #+#             */
/*   Updated: 2021/01/11 00:36:49 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

int pre_parser(const char *str,va_list argptr)
{
	int i;
	int count;
	int	temp;
	
	i = 0;
	count = 0;
	while(str[i] != '\0')
	{
		if (str[i] != '%')
			count += write(1,&str[i++],1);
		else
		{
			temp = parser(&str[i],argptr);
			i += temp;
			count += temp;
		}
	}
	return (count);
}

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
