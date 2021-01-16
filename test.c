#include <stdio.h>

int main(void)
{
	char *str = "%-10.5d\n";
	int i = -5;
	//ft_printf(str,i);
	printf(str,i);
}

// 	count = 0;
// 	i = 0;
// 	all_len = 0;
// 	num = va_arg(argptr,int);
// 	numlen = ft_intlen(num);
	
	// if (st_pars->minus == 1)
	// {
	// 	ft_putnbr_fd(num,1);
	// 	count += numlen;
	// 	while (i++ < st_pars->width - numlen)
	// 		count += write(1," ",1);
	// }
	// else if(st_pars->prec > numlen)
	// {
	// 	if (num < 0)
	// 	{
	// 		count += write(1,"-",1);
	// 		while (i++ < st_pars->prec - numlen + 1)
	// 			count += write(1,"0",1);
	// 		ft_putnbr_fd(num * -1, 1);
	// 		count += numlen - 1;
	// 	}
	// 	else if(st_pars->width > st_pars->prec)
	// 	{
	// 		while (i++ < st_pars->width - st_pars->prec)
	// 			count += write(1," ",1);
	// 		i = 0;
	// 		while (i++ < st_pars->prec - numlen)
	// 			count += write(1,"0",1);
	// 		ft_putnbr_fd(num,1);
	// 		count += numlen;
	// 	}
	// 	else
	// 	{
	// 		while (i++ < st_pars->prec - numlen)
	// 			count += write(1,"0",1);
	// 		ft_putnbr_fd(num,1);
	// 		count += numlen;
	// 	}
	
	// }
	// else if(st_pars->width > numlen)
	// {
	// 	if (st_pars->zero == -1)
	// 	{
	// 		while (i++ < st_pars->width - numlen)
	// 			count += write(1," ",1);
	// 		ft_putnbr_fd(num,1);
	// 		count += numlen;
	// 	}
	// 	else
	// 	{
	// 		if (num >= 0)
	// 		{
	// 			while (i++ < st_pars->width - numlen)
	// 				count += write(1,"0",1);
	// 			ft_putnbr_fd(num,1);
	// 			count += numlen;
	// 		}
	// 		else
	// 		{
	// 			count += write(1,"-",1);
	// 			while (i++ < st_pars->width - numlen)
	// 				count += write(1,"0",1);
	// 			ft_putnbr_fd(num * -1,1);
	// 			count += numlen - 1;
	// 		}
			
	// 	}
	// }
	// else if (st_pars->prec < 0 && st_pars->prec != -1)
	// {
	// 	count += write(1,"-",1);
	// 	while (i++ < st_pars->width - numlen - 1)
	// 		count += write(1," ",1);
	// 	ft_putnbr_fd(num * -1, 1);
	// 	count += numlen - 1;
	// }
	// else
	// {
	// 	ft_putnbr_fd(num,1);
	// 	count+= numlen;
	// }
	// return (count);
// }

// if (st_pars->minus == -1)
// 	{
// 		if (st_pars->zero == -1)
// 			zere_or_space = ' ';
// 		else
// 		{
// 			if (num < 0)
// 			{
// 				write(1,"-",1);
// 				num *= -1;
// 				// st_pars->width++;
// 			}
// 		}
		
// 		while (i++ < st_pars->width - numlen)
// 			count += write(1,&zere_or_space,1);
// 		if (num < 0)
// 		{
// 			count += write(1,"-",1);
// 			st_pars->prec++;
// 		}
// 		i = 0;
// 		while (i++ < st_pars->prec - numlen)
// 			count += write(1,"0",1);
// 		num = (num < 0 && numlen--) ? (num * -1) : num;
// 		ft_putnbr_fd(num,1);
// 		count += numlen;
// 	}
// 	else
// 	{
		
// 		while (i++ < st_pars->prec - numlen)
// 			count += write(1,"0",1);
// 		ft_putnbr_fd(num,1);
// 		count += numlen;
// 		i += count;
// 		if (st_pars->zero == -1)
// 			zere_or_space = ' ';
// 		i = 0;
// 		while (i++ < st_pars->width - numlen)
// 			count += write(1,&zere_or_space,1);
// 	}
// 	return (count);


// int write_num(int num)
// {
// 	int i;
// 	int count;
	
// 	count = 0;
// 	i = 0;
// 	while (i++ < len)
// 		count += write(1,'0',1);
// }
