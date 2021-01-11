/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 17:04:24 by atweek            #+#    #+#             */
/*   Updated: 2021/01/11 16:46:23 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include "../libft/libft.h"

int main(void)
{
	char str[] = "|%5.5c|";
	ft_printf("my --> ");
	ft_printf(str,'a');
	printf("\nof --> ");
	printf(str,'a');
}