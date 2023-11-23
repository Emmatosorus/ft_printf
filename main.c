#include "ft_printf.h"
#include <stdio.h> 

int	main(void)
{
	char *str = "42\t42";
	int s = 0;
	int n = -42;

	//s = printf("nm_printf = %%%s\n", str);
	//s = printf(NULL);
	s = printf("test %\0");
	printf("\n%d\n", s);
	//s = ft_printf("ft_printf = %%%s\n", str);
	//s = ft_printf(NULL);
	s = ft_printf("test %\0");
	printf("\n%d\n", s);
}
