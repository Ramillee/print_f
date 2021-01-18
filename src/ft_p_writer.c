/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_writer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 20:33:05 by atweek            #+#    #+#             */
/*   Updated: 2021/01/18 12:02:25 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

// int p_processing(t_pars *st_pars, va_list argptr)
// {
// 	int		i;
// 	unsigned long long p;

// 	i = 0;
// 	p = va_arg(argptr, unsigned long long);
	
#include <stdio.h>
// }

char  *hex_convert(int num, int flag)
{
	char	str[32];
	int		mod;
	int		i;

	
	i = 0;
	while (num > 0)
	{
		mod = num % 16;
		num = num / 16;
		str[i] = (flag) ? "0123456789ABCDEF"[mod] : "0123456789abcdef"[mod];
		i++;
	}
	str[i] = '\0';
	printf("%s",str);
	return (str);
}

int main(void)
{
	hex_convert(123,0);
}

