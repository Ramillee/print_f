/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_writer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 20:42:54 by atweek            #+#    #+#             */
/*   Updated: 2021/01/23 22:24:00 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

int		str_processing_len(t_pars *st_pars, int i, char *str, int all_len)
{
	int	count;

	count = 0;
	if (st_pars->strlen == -1)
		while (i++ < all_len)
			count += write(1, " ", 1);
	else if (st_pars->minus == 1)
	{
		count += write(1, str, st_pars->strlen);
		while (i++ < all_len - st_pars->strlen)
			count += write(1, " ", 1);
	}
	else if (st_pars->zero == 1)
	{
		while (i++ < all_len - st_pars->strlen)
			count += write(1, "0", 1);
		count += write(1, str, st_pars->strlen);
	}
	else
	{
		while (i++ < all_len - st_pars->strlen)
			count += write(1, " ", 1);
		count += write(1, str, st_pars->strlen);
	}
	return (count);
}

int		s_processing_util(t_pars *st_pars, char *str, int i, int count)
{
	int all_len;

	st_pars->strlen = ft_strlen(str);
	st_pars->strlen = (st_pars->prec < st_pars->strlen) ?
	st_pars->prec : st_pars->strlen;
	all_len = (st_pars->width < st_pars->strlen) ?
	st_pars->strlen : st_pars->width;
	count += str_processing_len(st_pars, i, str, all_len);
	return (count);
}

int		s_processing(t_pars *st_pars, va_list argptr)
{
	int		i;
	char	*str;
	int		strlen;
	int		count;

	count = 0;
	i = 0;
	if (st_pars->type == 37)
		str = "%";
	else
		str = va_arg(argptr, char *);
	if (str == NULL)
		str = "(null)";
	strlen = (int)ft_strlen(str);
	st_pars->prec = (st_pars->prec < 0) ? -1 : st_pars->prec;
	if (st_pars->prec == -1 && st_pars->width == -1 && st_pars->dot == 1)
		return (0);
	if (st_pars->prec == -1 && st_pars->width == -1 && st_pars->dot == -1)
		count += write(1, str, strlen);
	if (st_pars->prec == -1 && st_pars->width != -1 && st_pars->dot == 1)
		while (i++ < st_pars->width)
			count += write(1, " ", 1);
	if (st_pars->prec == -1 && st_pars->width != -1 && st_pars->dot == -1)
		st_pars->prec = strlen;
	return (s_processing_util(st_pars, str, i, count));
}

void	ft_putnbr_unsigned(int fd, unsigned int nb)
{
	unsigned int	nbr;

	nbr = (unsigned int)nb;
	if (nbr >= 10)
		ft_putnbr_unsigned(fd, nbr / 10);
	ft_putchar_fd((char)(nbr % 10 + 48), fd);
}

int		hex_intlen(unsigned long long int num)
{
	if (num <= 0)
		return (0);
	else
		return (1 + hex_intlen(num / 16));
}
