
#include <limits.h>
#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
	int n;

	n = 0;
	n = ft_printf("%x\n", LONG_MAX);
	printf("the retval: %d\n", n);
	n = printf("%lx", LONG_MAX);
	printf("the retval: %d\n", n);
	return(0);
}