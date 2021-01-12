/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 17:04:24 by atweek            #+#    #+#             */
/*   Updated: 2021/01/12 17:23:10 by atweek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include "ft_printf.h"
#include "../libft/libft.h"

int main(void)
{
	// char str[] = "|%s|";
	// ft_printf("my --> ");
	// ft_printf(str,"qwer");
	// printf("\nof --> ");
	// // printf(str,"qwer");
	printf("|%5.5s|\n","abc");
	ft_printf("|%5.5s|\n","abc");
	printf("|aaa %.3s|\n","abc");
	ft_printf("|aaa %.3s|\n","abc");
}