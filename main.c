// // /* ************************************************************************** */
// // /*                                                                            */
// // /*                                                        :::      ::::::::   */
// // /*   main.c                                             :+:      :+:    :+:   */
// // /*                                                    +:+ +:+         +:+     */
// // /*   By: atweek <atweek@student.42.fr>              +#+  +:+       +#+        */
// // /*                                                +#+#+#+#+#+   +#+           */
// // /*   Created: 2021/01/10 17:04:24 by atweek            #+#    #+#             */
/*   Updated: 2021/01/16 05:24:23 by atweek           ###   ########.fr       */
// // /*                                                                            */
// // /* ************************************************************************** */


#include <stdio.h>
#include "src/ft_printf.h"
#include "libft/libft.h"

int main(void)
{
	// char *str = "%%";
	// // int i = ;
	// int count = 0;
	// count = ft_printf(str);
	// write(1,"\n",1);
	// ft_putnbr_fd(count,1);
	// write(1,"\n",1);
	// count = 0;
	// count = printf(str);
	// write(1,"\n",1);
	// ft_putnbr_fd(count,1);
	// write(1,"\n",1);
	ft_printf("%05%");
}



// int main()
// {
//     char    str[] = "%c";
//     char    a = NULL;
//     printf("Мой:\n");
//     int d1 = ft_printf(str, a);
//     printf("Не мой:\n");
//     int d2 = printf(str, a);
//     printf("my len = %d\nnot my len = %d", d1, d2);
// }

// int main(void)
// {
// 	ft_printf("|%3.7i|\n",  34);
// 	printf("|%3.7i|\n",  34);
// }

// #include "libftprintf.h"
// #include <stdio.h>

// void	check_res(int a, int b)
// {
//     printf("return value: ");
// 	a == b ? printf("\033[0;32m") : printf("\033[0;31m");
// 	a == b ? printf("OK: ") : printf("KO: ");
// 	printf("\033[0m");	
// 	printf("yours = %d, expected = %d\n\n", a, b);
// }


// int main(void)
// {

// // 	printf("\n--------------Check for s-------------\n");
// // 	printf("|%8s|\n", "abra");
// // 	ft_printf("|%8s|\n", "abra");
// // 	printf("|%-8s|\n", "abrafdefgbr");
// // 	ft_printf("|%-8s|\n", "abrafdefgbr");
// // 	printf("|%8s|\n", "abra");
// // 	ft_printf("|%8s|\n", "abra");
// // 	printf("|%8s|\n", "abrafdefgbr");
// // 	ft_printf("|%8s|\n", "abrafdefgbr");
// // 	ft_printf("|%*.*s|\n", 20, 5, "1234567890123fsfbdfbdfvbbdvbvb");
// // 	printf("|%*.*s|\n", 20, 5,  "1234567890123fsfbdfbdfvbbdvbvb");
// // 	ft_printf("|%-*.*s|\n", 20, 5, "1234567890123fsfbdfbdfvbbdvbvb");
// // 	printf("|%-*.*s|\n", 20, 5, "1234567890123fsfbdfbdfvbbdvbvb");
// // 	ft_printf("|%.*s|\n",  5, "1234567890123fsfbdfbdfvbbdvbvb");
// // 	printf("|%.*s|\n",  5, "1234567890123fsfbdfbdfvbbdvbvb");
// // 	ft_printf("|%*.s|\n", 20, "1234567890123fsfbdfbdfvbbdvbvb");
// // 	printf("|%*.s|\n", 20,  "1234567890123fsfbdfbdfvbbdvbvb");
// // 	ft_printf("|%-*.s|\n", 20,  "1234567890123fsfbdfbdfvbbdvbvb");
// // 	printf("|%-*.s|\n", 20,  "1234567890123fsfbdfbdfvbbdvbvb");
// // 	ft_printf("|%.s|\n",  "1234567890123fsfbdfbdfvbbdvbvb");
// // 	printf("|%.s|\n",  "1234567890123fsfbdfbdfvbbdvbvb");
// // ft_printf("|%*s|\n",  40, "1234567890123fsfbdfbdfvbbdvbvb");
// // 	printf("|%*s|\n",  40, "1234567890123fsfbdfbdfvbbdvbvb");
// // 	printf("|%-*.s|\n", 20,  "1234567890123fsfbdfbdfvbbdvbvb");
// // 	ft_printf("|%-*.s|\n", 20,  "1234567890123fsfbdfbdfvbbdvbvb");
// // 	printf("|%-*.0s|\n", 20,  "1234567890123fsfbdfbdfvbbdvbvb");
// // 	ft_printf("|%-*.0s|\n", 20,  "1234567890123fsfbdfbdfvbbdvbvb");
// // 	printf("|%*.1s|\n", 20,  "1234567890123fsfbdfbdfvbbdvbvb");
// // 	ft_printf("|%*.1s|\n", 20,  "1234567890123fsfbdfbdfvbbdvbvb");
// // 	ft_printf("|%-*.*s|\n", 2, 20, "1234567890123fsfbdfbdfvbbdvbvb");
// // 	printf("|%-*.*s|\n", 2, 20, "1234567890123fsfbdfbdfvbbdvbvb");
// 	// char *p = NULL;
// 	// ft_printf("|%*s|\n",  40, p);
// 	// printf("|%*s|\n",  40, p);
// 	// ft_printf("|%*.*s|\n",  20, 2, p);
// 	// printf("|%*.*s|\n",  20, 2, p);
// 	// ft_printf("|%*.*s|\n",  20, 6, p);
// 	// printf("|%*.*s|\n",  20, 6, p);
// 	// ft_printf("|%-*s|\n",  20,  p);
// 	// printf("|%-*s|\n",  20, p);
// 	// ft_printf("|%-*.*s|\n",  20, 3, p);
// 	// printf("|%-*.*s|\n",  20, 3, p);
// 	// ft_printf("|%*s|\n",  -40, p);
// 	// printf("|%*s|\n",  -40, p);
// 	// ft_printf("|%*.*s|\n",  -20, -5, p);
// 	// printf("|%*.*s|\n",  -20, -5, p);
// 	// ft_printf("|%*.*s|\n",  -20, -6, p);
// 	// printf("|%*.*s|\n",  -20, -6, p);
// 	// ft_printf("|%-*s|\n",  -20,  p);
// 	// printf("|%-*s|\n",  -20, p);
// 	// ft_printf("|%-*.*s|\n",  -20, -5, p);
// 	// printf("|%-*.*s|\n",  -20, -5, p);
// // printf("\n--------------Check for c-------------\n");
// // 	ft_printf("|%*c|\n",  40, 'a');
// // 	printf("|%*c|\n",  40, 'a');
// // 	ft_printf("|%*c|\n",  0, 'a');
// // 	printf("|%*c|\n",0,   'a');
// // 	ft_printf("|%-*c|\n",0,   'a');
// // 	printf("|%-*c|\n",0, 'a');
// // 	ft_printf("|%-*c|\n",  40, 'a');
// // 	printf("|%-*c|\n",  40, 'a');
// // 	ft_printf("|%*c|\n",  5, 'a');
// // 	printf("|%*c|\n", 5, 'a');
// // 	ft_printf("|%-*c|\n", 5,   'a');
// // 	printf("|%-*c|\n", 5,'a');
// // 	ft_printf("|%-*c|\n", 1,   'a');
// // 	printf("|%-*c|\n", 1,'a');
// // 	ft_printf("|%-*c|\n", 0,   'a');
// // 	printf("|%-*c|\n", 0,'a');
// 	// printf("|%.c|\n", 'a');
// 	// ft_printf("|%.c|\n", 'a');
// 	// ft_printf("|%-.c|\n", 'a');
// 	// printf("|%-.c|\n", 'a');
// 	// ft_printf("|%0.c|\n", 'a');
// 	// printf("|%0.c|\n", 'a');
// 	// ft_printf("|%09c|\n", 'a');
// 	// printf("|%09c|\n", 'a');
// 	// ft_printf("|%0.*c|\n", 3,'a');
// 	// printf("|%0.*c|\n", 3, 'a');
// 	// printf("\n--------------Check with negative width for c-------------\n");
// 	// ft_printf("|%*c|\n",  -40, 'a');
// 	// printf("|%*c|\n",  -40, 'a');
// 	// ft_printf("|%*c|\n",  -1, 'a');
// 	// printf("|%*c|\n",-1,   'a');
// 	// ft_printf("|%-*c|\n",0,   'a');
// 	// printf("|%-*c|\n",0, 'a');
// 	// ft_printf("|%-*c|\n",  -40, 'a');
// 	// printf("|%-*c|\n",  -40, 'a');
// 	// ft_printf("|%*c|\n",  -5, 'a');
// 	// printf("|%*c|\n", -5, 'a');
// 	// ft_printf("|%-*c|\n", -5,   'a');
// 	// printf("|%-*c|\n", -5,'a');

// 	// printf("\n--------------Check for empty c-------------\n");
// 	// ft_printf("|%*c|\n",  40, '\0');
// 	// printf("|%*c|\n",  40, '\0');
// 	// ft_printf("|%*c|\n",  0, '\0');
// 	// printf("|%*c|\n",0,   '\0');
// 	// ft_printf("|%-*c|\n",0,  '\0');
// 	// printf("|%-*c|\n",0, '\0');
// 	// ft_printf("|%-*c|\n",  40, '\0');
// 	// printf("|%-*c|\n",  40, '\0');
// 	// ft_printf("|%*c|\n",  5, '\0');
// 	// printf("|%*c|\n", 5, '\0');
// 	// ft_printf("|%-*c|\n", 5,   '\0');
// 	// printf("|%-*c|\n", 5,'\0');
// 	// ft_printf("|%*c|\n",  1, '\0');
// 	// printf("|%*c|\n", 1, '\0');
// 	// ft_printf("|%-*c|\n", 1,   '\0');
// 	// printf("|%-*c|\n", 1,'\0');
// 	// printf("\n--------------Check with negative width for empty c-------------\n");
// 	// ft_printf("|%*c|\n",  -40, '\0');
// 	// printf("|%*c|\n",  -40, '\0');
// 	// ft_printf("|%*c|\n",  -1, '\0');
// 	// printf("|%*c|\n",-1,   '\0');
// 	// ft_printf("|%-*c|\n",-1,  '\0');
// 	// printf("|%-*c|\n",-1, '\0');
// 	// ft_printf("|%-*c|\n",  -40, '\0');
// 	// printf("|%-*c|\n",  -40, '\0');
// 	// ft_printf("|%*c|\n",  -5, '\0');
// 	// printf("|%*c|\n", -5, '\0');
// 	// ft_printf("|%-*c|\n", -5,   '\0');
// 	// printf("|%-*c|\n", -5,'\0');
// 	// 	printf("\n--------------Check for i-------------\n");
// 	// // ft_printf("|% +i|\n",   10);
// 	// // printf("|% +i|\n",  10);
// 	// ft_printf("|%*.*i|\n", 8, 5, 15 );
// 	// printf("|%*.*i|\n", 8, 5, 15 );
// 	// ft_printf("|%*.*i|\n", 8, 5, 152352352 );
// 	// printf("|%*.*i|\n", 8, 5, 152352352 );
// 	// ft_printf("|%0*i|\n", 18, 152352352 );
// 	// printf("|%0*i|\n", 18, 152352352 );
// 	// ft_printf("|%*.*i|\n", 18, 10, 152352352 );
// 	// printf("|%*.*i|\n", 18, 10, 152352352 );
// 	// ft_printf("|%-*.*i|\n", 18, 10, 152352352 );
// 	// printf("|%-*.*i|\n", 18, 10, 152352352 );
// 	// ft_printf("|%*.*i|\n", 18, 15, -152352352 );
// 	// printf("|%*.*i|\n", 18, 15, -152352352 );
// 	// ft_printf("|%*.*i|\n", 18, 10, 152352352 );
// 	// printf("|%*.*i|\n", 18, 10, 152352352 );
// 	// ft_printf("|%*.*i|\n", 18, 15, -152352352 );
// 	// printf("|%*.*i|\n", 18, 15, -152352352 );
// 	// ft_printf("|%-*.*i|\n", 3, 15, -152352352 );
// 	// printf("|%-*.*i|\n", 3, 15, -152352352 );
// 	// ft_printf("|%0*.*i|\n", 18, 4, 152352352 );
// 	// printf("|%0*.*i|\n", 18, 4, 152352352 );
// 	// printf("\n--------------Check for negative width and accuracy: i-------------\n");    	//проблемы
// 	// ft_printf("|%-*.*i|\n", -10, -5, 10);
// 	// printf("|%-*.*i|\n", -10, -5, 10);
// 	// ft_printf("|%*.*i|\n", -8, -5, 15 );
// 	// printf("|%*.*i|\n", -8, -5, 15 );
// 	// ft_printf("|%*.*i|\n", -8, -5, 152352352 );
// 	// printf("|%*.*i|\n", -8, -5, 152352352 );
// 	// ft_printf("|%0*i|\n", -18, 152352352 );
// 	// printf("|%0*i|\n", -18, 152352352 );
// 	// ft_printf("|%*.*i|\n", -18, -10, 152352352 );
// 	// printf("|%*.*i|\n", -18, -10, 152352352 );
// 	// ft_printf("|%-*.*i|\n", -18, -10, 152352352 );
// 	// printf("|%-*.*i|\n", -18, -10, 152352352 );
// 	// ft_printf("|%*.*i|\n", -18, -15, -152352352 );
// 	// printf("|%*.*i|\n", -18, -15, -152352352 );
// 	// ft_printf("|%*.*i|\n", -18, 10, 152352352 );
// 	// printf("|%*.*i|\n", -18, 10, 152352352 );
// 	// ft_printf("|%*.*i|\n", 18, -15, -152352352 );
// 	// printf("|%*.*i|\n", 18, -15, -152352352 );
// 	// ft_printf("|%-*.*i|\n", -3, -15, -152352352 );
// 	// printf("|%-*.*i|\n", -3, -15, -152352352 );
// 	// ft_printf("|%0*.*i|\n", -18, -4, 152352352 );
// 	// printf("|%0*.*i|\n", -18, -4, 152352352 );
// // // //
// // // //	printf("\n--------------Check for d-------------\n");
// // // //	ft_printf("|%-*.*d|\n", 10, 5, 10);
// // // //	printf("|%-*.*d|\n", 10, 5, 10);
// // // //	ft_printf("|%*.*d|\n", 8, 5, 15 );
// // // //	printf("|%*.*d|\n", 8, 5, 15 );
// // // //	ft_printf("|%*.*d|\n", 8, 5, 152352352 );
// // // //	printf("|%*.*d|\n", 8, 5, 152352352 );
// // // //	ft_printf("|%0*d|\n", 18, 152352352 );
// // // //	printf("|%0*d|\n", 18, 152352352 );
// // // //	ft_printf("|%*.*d|\n", 18, 10, 152352352 );
// // // //	printf("|%*.*d|\n", 18, 10, 152352352 );
// // // //	ft_printf("|%-*.*d|\n", 18, 10, 152352352 );
// // // //	printf("|%-*.*d|\n", 18, 10, 152352352 );
// // // //	ft_printf("|%*.*d|\n", 18, 15, -152352352 );
// // // //	printf("|%*.*d|\n", 18, 15, -152352352 );
// // // //	ft_printf("|%*.*d|\n", 18, 10, 152352352 );
// // // //	printf("|%*.*d|\n", 18, 10, 152352352 );
// // // //	ft_printf("|%*.*d|\n", 18, 15, -152352352 );
// // // //	printf("|%*.*d|\n", 18, 15, -152352352 );
// // // //	ft_printf("|%-*.*d|\n", 3, 15, -152352352 );
// // // //	printf("|%-*.*d|\n", 3, 15, -152352352 );
// // // //	ft_printf("|%-*.*d|\n", 15, 3, -152352352 );
// // // //	printf("|%-*.*d|\n", 15, 3, -152352352 );
// // // //	ft_printf("|%0*.*d|\n", 18, 4, 152352352 );
// // // //	printf("|%0*.*d|\n", 18, 4, 152352352 );
// // // //	printf("\n--------------Tests with negative width and accuracy for d-------------\n");	//проблемы
// // // //	ft_printf("|%-*.*d|\n", -10, -5, 10);
// // // //	printf("|%-*.*d|\n", -10, -5, 10);
// // // //	ft_printf("|%*.*d|\n", -8, 5, 15 );
// // // //	printf("|%*.*d|\n", -8, 5, 15 );
// // // //	ft_printf("|%*.*d|\n", 8, -5, 152352352 );
// // // //	printf("|%*.*d|\n", 8, -5, 152352352 );
// // // //	ft_printf("|%0*d|\n", -18, 152352352 );
// // // //	printf("|%0*d|\n", -18, 152352352 );
// // // //	ft_printf("|%*.*d|\n", -18, 10, 152352352 );
// // // //	printf("|%*.*d|\n", -18, 10, 152352352 );
// // // //	ft_printf("|%-*.*d|\n", 18, -10, 152352352 );
// // // //	printf("|%-*.*d|\n", 18, -10, 152352352 );
// // // //	ft_printf("|%*.*d|\n", -18, -15, -152352352 );
// // // //	printf("|%*.*d|\n", -18, -15, -152352352 );
// // // //	ft_printf("|%*.*d|\n", 18, -10, 152352352 );
// // // //	printf("|%*.*d|\n", 18, -10, 152352352 );
// // // //	ft_printf("|%*.*d|\n", -18, 15, -152352352 );
// // // //	printf("|%*.*d|\n", -18, 15, -152352352 );
// // // //	ft_printf("|%-*.*d|\n", 3, -15, -152352352 );
// // // //	printf("|%-*.*d|\n", 3, -15, -152352352 );
// // // //	ft_printf("|%-*.*d|\n", -15, 3, -152352352 );
// // // //	printf("|%-*.*d|\n", -15, 3, -152352352 );
// // // //	ft_printf("|%0*.*d|\n", -18, -4, 152352352 );
// // // //	printf("|%0*.*d|\n", -18, -4, 152352352 );
// // // //	ft_printf("|%0*.*d|\n", -18, 10, 152352352 );
// // // //	printf("|%0*.*d|\n", -18, 10, 152352352 );
// // // //	ft_printf("|%0*.*d|\n", 18, -15, -152352352 );
// // // //	printf("|%0*.*d|\n", 18, -15, -152352352 );
// // // //	ft_printf("|%-*.*d|\n", -3, 15, -152352352 );
// // // //	printf("|%-*.*d|\n", -3, 15, -152352352 );
// // // //	ft_printf("|%0*.*d|\n", 18, -4, 152352352 );
// // // //	printf("|%0*.*d|\n", 18, -4, 152352352 );
// // // //	printf("\n--------------Other tests for d-------------\n");
// // // //	ft_printf("|%.0d|\n", 0);
// // // //	printf("|%.0d|\n", 0);
// // // //	ft_printf("|%.d|\n", 0);
// // // //	printf("|%.d|\n", 0);
// // // //	ft_printf("|%5.d|\n", 0);
// // // //	printf("|%5.d|\n", 0);
// // // //	ft_printf("|%5.0d|\n", 0);
// // // //	printf("|%5.0d|\n", 0);
// // // //	ft_printf("|%-5.d|\n", 0);
// // // //	printf("|%-5.d|\n", 0);
// // // //		printf("\n--------------Check for %%-------------\n");
// // // //	ft_printf("|%5%|\n");
// // // //	printf("|%5%|\n");
// // // //	ft_printf("|%5.%|\n");
// // // //	printf("|%5.%|\n");
// // // //
// // // //	ft_printf("|%-5%|\n");
// // // //	printf("|%-5%|\n");
// // // //	ft_printf("|%-5.%|\n");
// // // //	printf("|%-5.%|\n");
// // // //
// // // //	ft_printf("|%*.*%|\n", 12, 15);
// // // //	printf("|%*.*%|\n", 12, 15);
// // // //	ft_printf("|%*.%|\n", 12);
// // // //	printf("|%*.%|\n", 12);
// // // //
// // // //	ft_printf("|%0.*%|\n", 12);
// // // //	printf("|%0.*%|\n", 12);
// // // //
// // // //	ft_printf("|%0*%|\n", 12);
// // // //	printf("|%0*%|\n", 12);
// // // //	ft_printf("|%0*.*%|\n", 12, 5);
// // // //	printf("|%0*.*%|\n", 12, 5);
// // // //	ft_printf("|%0*.*%|\n", 12, 15);
// // // //	printf("|%0*.*%|\n", 12, 15);
// // // //	ft_printf("|%0*.*%|\n", 12, 1);
// // // //	printf("|%0*.*%|\n", 12, 1);
// // // //	ft_printf("|%0*.*%|\n", 1, 5);
// // // //	printf("|%0*.*%|\n", 1, 5);
// // // //	ft_printf("|%0*.*%|\n", 1, 1);
// // // //	printf("|%0*.*%|\n", 1, 1);
// // // //	ft_printf("|%0*.*%|\n", 12, 0);
// // // //	printf("|%0*.*%|\n", 12, 0);
// // // //
// // // //	ft_printf("|%0*.*%|\n", 0, 10);
// // // //	printf("|%0*.*%|\n", 0, 10);
// // // //	ft_printf("|%0*.*%|\n", 0, 0);
// // // //	printf("|%0*.*%|\n", 0, 0);
// // // //
// // // //	ft_printf("|%*.*%|\n", -12, -15);
// // // //	printf("|%*.*%|\n", -12, -15);
// // // //	ft_printf("|%*.*%|\n", 12, -15);
// // // //	printf("|%*.*%|\n", 12, -15);
// // // //	ft_printf("|%*.%|\n", -12);
// // // //	printf("|%*.%|\n", -12);
// // // //
// // // //	ft_printf("|%0.*%|\n", -12);
// // // //	printf("|%0.*%|\n", -12);
// // // //
// // // //	ft_printf("|%0*%|\n", -12);
// // // //	printf("|%0*%|\n", -12);
// // // //	ft_printf("|%0*.*%|\n", -12, -5);
// // // //	printf("|%0*.*%|\n", -12, -5);
// // // //	ft_printf("|%0*.*%|\n", -12, -15);
// // // //	printf("|%0*.*%|\n", -12, -15);
// // // //	ft_printf("|%0*.*%|\n", -12, -1);
// // // //	printf("|%0*.*%|\n", -12, -1);
// // // //	ft_printf("|%0*.*%|\n", -1, -5);
// // // //	printf("|%0*.*%|\n", -1, -5);
// // // //	ft_printf("|%0*.*%|\n", -1, -1);
// // // //	printf("|%0*.*%|\n", -1, -1);
// // // //	ft_printf("|%0*.*%|\n", -12, 0);
// // // //	printf("|%0*.*%|\n", -12, 0);
// // // //
// // // //	ft_printf("|%0*.*%|\n", 0, -10);
// // // //	printf("|%0*.*%|\n", 0, -10);
// // // //	ft_printf("|%0*.*%|\n", 0, 0);
// // // //	printf("|%0*.*%|\n", 0, 0);
// // // //	ft_printf("|%-05%|\n");
// // // //	printf("|%-05%|\n");
// // // //		printf("\n--------------Check for u-------------\n");
// // // //	ft_printf("|%-*.*u|\n", 10, 5, 10);
// // // //	printf("|%-*.*u|\n", 10, 5, 10);
// // // //	ft_printf("|%*.*u|\n", 8, 5, 15 );
// // // //	printf("|%*.*u|\n", 8, 5, 15 );
// // // //	ft_printf("|%*.*u|\n", 8, 5, 152352352 );
// // // //	printf("|%*.*u|\n", 8, 5, 152352352 );
// // // //	ft_printf("|%0*u|\n", 18, 152352352 );
// // // //	printf("|%0*u|\n", 18, 152352352 );
// // // //	ft_printf("|%*.*u|\n", 18, 10, 152352352 );
// // // //	printf("|%*.*u|\n", 18, 10, 152352352 );
// // // //	ft_printf("|%-*.*u|\n", 18, 10, 152352352 );
// // // //	printf("|%-*.*u|\n", 18, 10, 152352352 );
// // // //	ft_printf("|%*.*u|\n", 18, 15, -152352352 );
// // // //	printf("|%*.*u|\n", 18, 15, -152352352 );
// // // //	ft_printf("|%*.*u|\n", 18, 10, 152352352 );
// // // //	printf("|%*.*u|\n", 18, 10, 152352352 );
// // // //	ft_printf("|%*.*u|\n", 18, 15, -152352352 );
// // // //	printf("|%*.*u|\n", 18, 15, -152352352 );
// // // //	ft_printf("|%-*.*u|\n", 3, 15, -152352352 );
// // // //	printf("|%-*.*u|\n", 3, 15, -152352352 );
// // // //	ft_printf("|%0*.*u|\n", 18, 4, 152352352 );
// // // //	printf("|%0*.*u|\n", 18, 4, 152352352 );
// // // //	printf("|%020.18u|\n", -345);
// // // //	ft_printf("|%020.18u|\n", -345);
// // // //	printf("|%-20.18u|\n", -345);
// // // //	ft_printf("|%-20.18u|\n", -345);
// // // //	printf("|%-20.*u|\n", -18, -345);
// // // //	ft_printf("|%-20.*u|\n", -18, -345);
// // // //
// // // //	printf("\n--------------Check with negative width and accuracy for u-------------\n");	//проблемы
// // // //	ft_printf("|%*.*u|\n", -18, -10, 152352352 );
// // // //	printf("|%*.*u|\n", -18, -10, 152352352 );
// // // //	ft_printf("|%-*.*u|\n", 18, -10, 152352352 );
// // // //	printf("|%-*.*u|\n", 18, -10, 152352352 );
// // // //	ft_printf("|%*.*u|\n", -18, 15, -152352352 );
// // // //	printf("|%*.*u|\n", -18, 15, -152352352 );
// // // //	ft_printf("|%0*.*u|\n", -18, 10, 152352352 );
// // // //	printf("|%0*.*u|\n", -18, 10, 152352352 );
// // // //	ft_printf("|%0*.*u|\n", 18, -15, -152352352 );
// // // //	printf("|%0*.*u|\n", 18, -15, -152352352 );
// // // //	ft_printf("|%-*.*u|\n", -3, 15, -152352352 );
// // // //	printf("|%-*.*u|\n", -3, 15, -152352352 );
// // // //	ft_printf("|%0*.*u|\n", 18, -4, 152352352 );
// // // //	printf("|%0*.*u|\n", 18, -4, 152352352 );
// // // //	ft_printf("|%*.*u|\n", -18, -10, 0 );
// // // //	printf("|%*.*u|\n", -18, -10, 0 );
// // // //	ft_printf("|%-*.*u|\n", 18, -10, 0 );
// // // //	printf("|%-*.*u|\n", 18, -10, 0 );
// // // //	ft_printf("|%*.*u|\n", -18, 15, -0 );
// // // //	printf("|%*.*u|\n", -18, 15, -0 );
// // // //	ft_printf("|%0*.*u|\n", -18, 10, 0 );
// // // //	printf("|%0*.*u|\n", -18, 10, 0 );
// // // //	ft_printf("|%0*.*u|\n", 18, -15, -0 );
// // // //	printf("|%0*.*u|\n", 18, -15, -0 );
// // // //	ft_printf("|%-*.*u|\n", -3, 15, -0 );
// // // //	printf("|%-*.*u|\n", -3, 15, -0 );
// // // //	ft_printf("|%0*.*u|\n", 18, -4, 0 );
// // // //	printf("|%0*.*u|\n", 18, -4, 0 );
// // // //	int  aa;
// // // //	int bb;
// // // //	aa = ft_printf("bla|%*.*i||%*.*i||%0*.*u|bla\n", 18, -15, -152352352 , 18,
// // // //			  -15,
// // // //		   -152352352, 18, -4, 0 );
// // // //	bb = printf("bla|%*.*i||%*.*i||%0*.*u|bla\n", 18, -15, -152352352 , 18, -15,
// // // //		   -152352352, 18, -4, 0 );
// // // //	printf("%d%d", aa , bb);
// // // //		printf("\n--------------Check for x-------------\n");	//проблемы
// // // //	ft_printf("|%-*.*x|\n", 10, 5, 10);
// // // //	printf("|%-*.*x|\n", 10, 5, 10);
// // // //	ft_printf("|%*.*x|\n", 8, 5, 15 );
// // // //	printf("|%*.*x|\n", 8, 5, 15 );
// // // //	ft_printf("|%*.*x|\n", 8, 5, 152352352 );
// // // //	printf("|%*.*x|\n", 8, 5, 152352352 );
// // // //	ft_printf("|%0*x|\n", 18, 152352352 );
// // // //	printf("|%0*x|\n", 18, 152352352 );
// // // //	ft_printf("|%-*.*x|\n", 10, 0, 0);
// // // //	printf("|%-*.*x|\n", 10, 0, 0);
// // // //	ft_printf("|%*.*x|\n", 8, 0, 0 );
// // // //	printf("|%*.*x|\n", 8, 0, 0 );
// // // //	ft_printf("|%*.*x|\n", 8, 5, 0 );
// // // //	printf("|%*.*x|\n", 8, 5, 0 );
// // // //	ft_printf("|%0*x|\n", 18, 0 );
// // // //	printf("|%0*x|\n", 18, 0 );
// // // //	ft_printf("|%*.*x|\n", 18, 10, 152352352 );
// // // //	printf("|%*.*x|\n", 18, 10, 152352352 );
// // // //	ft_printf("|%-*.*x|\n", 18, 10, 152352352 );
// // // //	printf("|%-*.*x|\n", 18, 10, 152352352 );
// // // //	ft_printf("|%*.*x|\n", 18, 15, -152352352 );
// // // //	printf("|%*.*x|\n", 18, 15, -152352352 );
// // // //	ft_printf("|%*.*x|\n", 18, 10, 152352352 );
// // // //	printf("|%*.*x|\n", 18, 10, 152352352 );
// // // //	ft_printf("|%*.*x|\n", 18, 15, -152352352 );
// // // //	printf("|%*.*x|\n", 18, 15, -152352352 );
// // // //	ft_printf("|%-*.*x|\n", 3, 15, -152352352 );
// // // //	printf("|%-*.*x|\n", 3, 15, -152352352 );
// // // //	ft_printf("|%0*.*x|\n", 18, 4, 152352352 );
// // // //	printf("|%0*.*x|\n", 18, 4, 152352352 );
// // // //
// // // //	printf("\n--------------Check with negative width and accuracy for x-------------\n");	//проблемы
// // // //	ft_printf("|%*.*x|\n", -18, -10, 152352352 );
// // // //	printf("|%*.*x|\n", -18, -10, 152352352 );
// // // //	ft_printf("|%-*.*x|\n", 18, -10, 152352352 );
// // // //	printf("|%-*.*x|\n", 18, -10, 152352352 );
// // // //	ft_printf("|%*.*x|\n", -18, 15, -152352352 );
// // // //	printf("|%*.*x|\n", -18, 15, -152352352 );
// // // //	ft_printf("|%0*.*x|\n", -18, 10, 152352352 );
// // // //	printf("|%0*.*x|\n", -18, 10, 152352352 );
// // // //	ft_printf("|%0*.*x|\n", 18, -15, -152352352 );
// // // //	printf("|%0*.*x|\n", 18, -15, -152352352 );
// // // //	ft_printf("|%-*.*x|\n", -3, 15, -152352352 );
// // // //	printf("|%-*.*x|\n", -3, 15, -152352352 );
// // // //	ft_printf("|%0*.*x|\n", 18, -4, 152352352 );
// // // //	printf("|%0*.*x|\n", 18, -4, 152352352 );
// // // //	ft_printf("|%*.*x|\n", -18, -10, 0 );
// // // //	printf("|%*.*x|\n", -18, -10, 0 );
// // // //	ft_printf("|%*.*x|\n", -18, 1, 0 );
// // // //	printf("|%*.*x|\n", -18, 1, 0 );
// // // //	ft_printf("|%*.*x|\n", -18, -1, 0 );
// // // //	printf("|%*.*x|\n", -18, -1, 0 );
// // // //	ft_printf("|%*.*x|\n", -18, 0, 0 );
// // // //	printf("|%*.*x|\n", -18, 0, 0 );
// // // //	ft_printf("|%-*.*x|\n", 18, -10, 0 );
// // // //	printf("|%-*.*x|\n", 18, -10, 0 );
// // // //	ft_printf("|%*.*x|\n", -18, 15, -0 );
// // // //	printf("|%*.*x|\n", -18, 15, -0 );
// // // //	ft_printf("|%0*.*x|\n", -18, 10, 0 );
// // // //	printf("|%0*.*x|\n", -18, 10, 0 );
// // // //	ft_printf("|%0*.*x|\n", 18, -15, -0 );
// // // //	printf("|%0*.*x|\n", 18, -15, -0 );
// // // //
// // // //	ft_printf("|%-*.*x|\n", -3, 15, -0 );
// // // //	printf("|%-*.*x|\n", -3, 15, -0 );
// // // //	ft_printf("|%-*.*x|\n", -3, 15, 0 );
// // // //	printf("|%-*.*x|\n", -3, 15, 0 );
// // // //	ft_printf("|%0*.*x|\n", 18, -4, 0 );
// // // //	printf("|%0*.*x|\n", 18, -4, 0 );
// // // //
// // // //	printf("\n--------------Check for X-------------\n");	//проблемы и с отрицательными
// // // //	ft_printf("|%-*.*X|\n", 10, 5, 10);
// // // //	printf("|%-*.*X|\n", 10, 5, 10);
// // // //	ft_printf("|%*.*X|\n", 8, 5, 15 );
// // // //	printf("|%*.*X|\n", 8, 5, 15 );
// // // //	ft_printf("|%*.*X|\n", 8, 5, 152352352 );
// // // //	printf("|%*.*X|\n", 8, 5, 152352352 );
// // // //	ft_printf("|%0*X|\n", 18, 152352352 );
// // // //	printf("|%0*X|\n", 18, 152352352 );
// // // //	ft_printf("|%-*.*X|\n", 10, 5, 0);
// // // //	printf("|%-*.*X|\n", 10, 5, 0);
// // // //	ft_printf("|%*.*X|\n", 8, 5, 0 );
// // // //	printf("|%*.*X|\n", 8, 5, 0 );
// // // //	ft_printf("|%*.*X|\n", 8, 5, 0 );
// // // //	printf("|%*.*X|\n", 8, 5, 0 );
// // // //	ft_printf("|%0*X|\n", 18, 0 );
// // // //	printf("|%0*X|\n", 18, 0 );
// // // //	ft_printf("|%-*.*X|\n", 10, 0, 0);
// // // //	printf("|%-*.*X|\n", 10, 0, 0);
// // // //	ft_printf("|%*.*X|\n", 8, 0, 0 );
// // // //	printf("|%*.*X|\n", 8, 0, 0 );
// // // //	ft_printf("|%*.*X|\n", 8, 5, 0 );
// // // //	printf("|%*.*X|\n", 8, 5, 0 );
// // // //	ft_printf("|%0*X|\n", 18, 0 );
// // // //	printf("|%0*X|\n", 18, 0 );
// // // //	ft_printf("|%*.*X|\n", 18, 10, 152352352 );
// // // //	printf("|%*.*X|\n", 18, 10, 152352352 );
// // // //	ft_printf("|%-*.*X|\n", 18, 10, 152352352 );
// // // //	printf("|%-*.*X|\n", 18, 10, 152352352 );
// // // //	ft_printf("|%*.*X|\n", 18, 15, -152352352 );
// // // //	printf("|%*.*X|\n", 18, 15, -152352352 );
// // // //	ft_printf("|%*.*X|\n", 18, 10, 152352352 );
// // // //	printf("|%*.*X|\n", 18, 10, 152352352 );
// // // //	ft_printf("|%*.*X|\n", 18, 15, -152352352 );
// // // //	printf("|%*.*X|\n", 18, 15, -152352352 );
// // // //	ft_printf("|%-*.*X|\n", 3, 15, -152352352 );
// // // //	printf("|%-*.*X|\n", 3, 15, -152352352 );
// // // //	ft_printf("|%0*.*X|\n", 18, 4, 152352352 );
// // // //	printf("|%0*.*X|\n", 18, 4, 152352352 );
// // // //		printf("\n--------------Check for p-------------\n");
// // // //	ft_printf("|%-*p|\n",  20, NULL);
// // // //	printf("|%-*p|\n",  20,  NULL);
// // // //	ft_printf("|%*p|\n",  20, NULL);
// // // //	printf("|%*p|\n",  20,  NULL);
// // // //	ft_printf("|%*p|\n",  1, NULL);
// // // //	printf("|%*p|\n",  1,  NULL);
// // // //	ft_printf("|%-*p|\n",  1, NULL);
// // // //	printf("|%-*p|\n",  1,  NULL);
// // // //	ft_printf("|%-*p|\n",  0, NULL);
// // // //	printf("|%-*p|\n",  0,  NULL);
// // // //	ft_printf("|%*p|\n",  16, NULL);
// // // //	printf("|%*p|\n",  16,  NULL);
// // // //	ft_printf("|%-*p|\n",  -20, NULL);
// // // //	printf("|%-*p|\n",  -20,  NULL);
// // // //	ft_printf("|%*p|\n",  -20, NULL);
// // // //	printf("|%*p|\n",  -20,  NULL);
// // // //	ft_printf("|%*p|\n",  -1, NULL);
// // // //	printf("|%*p|\n",  -1,  NULL);
// // // //	ft_printf("|%-*p|\n",  -1, NULL);
// // // //	printf("|%-*p|\n",  -1,  NULL);
// // // //	ft_printf("|%*p|\n",  -16, NULL);
// // // //	printf("|%*p|\n",  -16,  NULL);
// // // //	printf("\n--------------Check with . for p-------------\n");
// // // //	ft_printf("|%.p|\n", NULL);
// // // //	printf("|%.p|\n", NULL);
// // // //
// // // //	int a = 23;
// // // //	int *pt = &a;
// // // //	char *str = "aa";
// // // //	printf("And now address: |%p| |%p|\n", &a, str);
// // // //	ft_printf("And now address: |%p| |%p|\n", &a, str);
// // // //	ft_printf("|%-*p|\n",  20, &a);
// // // //	printf("|%-*p|\n",  20,  &a);
// // // //	ft_printf("|%*p|\n",  20, &a);
// // // //	printf("|%*p|\n",  20,  &a);
// // // //	ft_printf("|%*p|\n",  1, &a);
// // // //	printf("|%*p|\n",  1,  &a);
// // // //	ft_printf("|%-*p|\n",  1, &a);
// // // //	printf("|%-*p|\n",  1,  &a);
// // // //	ft_printf("|%-*p|\n",  0, &a);
// // // //	printf("|%-*p|\n",  0,  &a);
// // // //	ft_printf("|%*p|\n",  16, &a);
// // // //	printf("|%*p|\n",  16,  &a);
// // // //	ft_printf("|%-*p|\n",  -20, &a);
// // // //	printf("|%-*p|\n",  -20,  &a);
// // // //	ft_printf("|%*p|\n",  -20, &a);
// // // //	printf("|%*p|\n",  -20,  &a);
// // // //	ft_printf("|%*p|\n",  -1, &a);
// // // //	printf("|%*p|\n",  -1,  &a);
// // // //	ft_printf("|%-*p|\n",  -1, &a);
// // // //	printf("|%-*p|\n",  -1,  &a);
// // // //	ft_printf("|%*p|\n",  -16, &a);
// // // //	printf("|%*p|\n",  -16,  &a);
// // // 		// printf("\n--------------General check-------------\n");
// // // //	int a1, b1, b;
// // // //	a1 = ft_printf("Chislo:|%-5s|kust and |%9c|. This sum is |%i|. This is |%%|. And now unsigned: |%u|\n", "abra", 'e', 56, -43);
// // // //	b1 = printf("Chislo:|%-5s|kust and |%9c|. This sum is |%i|. This is |%%|. And now unsigned: |%u|\n", "abra", 'e', 56, -43);
// // // //	printf("%d %d\n", a1, b1);
// // // //	a1 = ft_printf("and now heximal: |%8x|, |%X|\n", 5554645, -123);
// // // //	b1 = printf("and now heximal: |%8x|, |%X|\n", 5554645, -123);
// // // //	printf("%d %d\n", a1, b1);
// // // //	char *ptr = NULL;
// // // //	printf("|%p %s|\n", NULL, ptr);
// // // //	ft_printf("|%p %s|\n", NULL, ptr);
// // // //	printf("%s%s", "hello", "world");
// // // //	ft_printf("%s%s", "hello", "world");
// // // 	// printf("\n--------------General check-------------\n");

// // // //	printf("%3.s", NULL);
// // // //	ft_printf("%3.s", NULL);
// // // //	ft_printf("%10p\n", 1234);
// // // //	printf("%10p\n", 1234);
// // // //	ft_printf("|%5p|\n", 0);
// // // //	printf("|%5p|\n", 0);

// // // //	static unsigned int		mx_u = 235;
// // // //	static char				mx_c = 'G';
// // // //	static char			   *mx_s = "Hello, World!";
// // // //	static int				mx_i = 42;

// // // int a = 19;
// // // int d;
// // // int c;
// // // //	printf("  %u    %%    %p    %x    %s    %i  ",
// // // //			mx_u, &mx_i, mx_u, mx_s, mx_i);
// // // //	ft_printf("  %u    %%    %p    %x    %s    %i  ",
// // // //		   mx_u, &mx_i, mx_u, mx_s, mx_i);
// // // //	printf("  %x    %c    %X    %s    %u    %p  \n",
// // // //		   mx_u, mx_c, mx_u, mx_s, mx_u, &mx_i);
// // // //	ft_printf("  %x    %c    %X    %s    %u    %p  \n",
// // // //			  mx_u, mx_c, mx_u, mx_s, mx_u, &mx_i);
// // // //	printf("  %i    %s    %%    %u    %c    %x  \n",
// // // //		   mx_i, mx_s, mx_u, mx_c, mx_u);
// // // //	ft_printf("  %i    %s    %%    %u    %c    %x  \n",
// // // //			  mx_i, mx_s, mx_u, mx_c, mx_u);

// // // 	// printf("|%*p|\n", -16, &a);
// // // 	// ft_printf("|%*p|\n", -16, &a);
// // // 	// c = ft_printf("|%03.7d|\n", -2375);
// // // 	// d = printf("|%03.7d|\n", -2375);
// // // 	// printf("%d = %d\n", c, d);
// }
