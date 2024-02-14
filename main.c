
#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>
#include <stdio.h>

int	main(void)
{
	int n;

	n = 0;
	n = ft_printf("%p", (void *)0);
	ft_printf("--->return value length ft_printf: %d\n", n);
	n = printf("%p", (void *)0);
	printf("---> return value length printf: %d\n", n);
	return (0);
}

//	int main(void) 
//	{
//	    printf("%p\n", (void *)0);
//	    return 0;
//	}
//	
//	
//	
//  int	main(void)
//  {
//  	int n;
//  
//  	n = 0;
//  	n = ft_printf(" %x ", -42);
//  	ft_printf("return (value length ft_printf: %d\n", n);
//  	n = printf(" %x ", -42);
//  	printf("\nreturn (value length printf: %d\n", n);
//  	return (0);
//  }