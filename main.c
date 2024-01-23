
#include <limits.h>
#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
	int n;

	n = 0;
	n = ft_printf(" %x ", -42);
	ft_printf("return value length ft_printf: %d\n", n);
	n = printf(" %x ", -42);
	printf("\nreturn value length printf: %d\n", n);
	return(0);
}