#include <stdio.h>

int hex_intlen(int num)
{
	if (num <= 0)
		return (0);
	else
		return(1 + hex_intlen(num / 16));
}

int main(void)
{
	printf("%x\n",);
	printf("%d",hex_intlen(1));
}
