/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_writer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 20:43:14 by atweek            #+#    #+#             */
/*   Updated: 2021/01/23 18:53:47 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

int	ptr_intlen(unsigned long long int num)
{
	int len;

	len = 0;
	while (num > 0)
	{
		num /= 16;
		len++;
	}
	len = (len == 0) ? 3 : len + 2;
	return (len);
}

int	p_convert(unsigned long long int hex, int len, t_pars *st_pars)
{
	int						count;
	unsigned long long int	mod;
	char					str[len + 1];
	int						i;

	if (hex == 0)
		return (write(1, "0", 1));
	i = 0;
	count = 0;
	while (hex > 0)
	{
		mod = hex % 16;
		hex = hex / 16;
		str[i++] = (st_pars->type == 'X') ? "0123456789ABCDEF"[mod] :
										"0123456789abcdef"[mod];
	}
	str[i--] = '\0';
	while (i >= 0)
		count += write(1, &str[i--], 1);
	return (count);
}

int	p_processing_minus(t_pars *st_pars, int len, unsigned long long int pointer)
{
	int count;
	int i;

	count = 0;
	i = 0;
	count += write(1, "0x", 2);
	while (i++ < st_pars->prec - len)
		count += write(1, "0", 1);
	count += p_convert(pointer, len, st_pars);
	i = 0;
	while (i < st_pars->width - len && (i < st_pars->width - st_pars->prec))
	{
		if (st_pars->zero == 1)
			count += write(1, "0", 1);
		else
			count += write(1, " ", 1);
		i++;
	}
	return (count);
}

int	p_processing(t_pars *st_pars, va_list argptr)
{
	int					i;
	unsigned long long	pointer;
	int					count;
	int					len;

	i = 0;
	count = 0;
	pointer = va_arg(argptr, unsigned long long int);
	len = ptr_intlen(pointer);
	if ((st_pars->prec == 0 || (st_pars->prec == -1 && st_pars->dot == 1)))
	{
		while (i++ < st_pars->width - 2)
			count += write(1, " ", 1);
		count += write(1, "0x", 2);
		return (count);
	}
	preparation(st_pars, len);
	if (st_pars->minus == 1)
		return (p_processing_minus(st_pars, len, pointer));
	count += part_write(st_pars, len);
	i = 0;
	while (i++ < st_pars->prec - (len - 2))
		count += write(1, "0", 1);
	count += p_convert(pointer, len, st_pars);
	return (count);
}
