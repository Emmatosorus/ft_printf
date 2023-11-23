#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	char *str = "42\t42";
	int ft = 0;
	int nm = 0;
	int n = INT_MAX;

	nm = printf("nm = %s %d %c vdvdvd  %p %x %x %x %x %x\n", "test", n, 'c', &str, n, n, n, n, -42);
	ft = ft_printf("ft = %s %d %c vdvdvd  %p %x %x %x %x %x\n", "test", n, 'c', &str, n, n, n, n, -42);
	printf("\nnm = %d\n", nm);
	printf("ft = %d\n\n", ft);

	nm = printf("nm_printf = %c\n", str[0]);
	ft = ft_printf("ft_printf = %c\n", str[0]);
	printf("\nnm = %d\n", nm);
	printf("ft = %d\n\n", ft);

	nm = printf("nm_printf = %s\n", str);
	ft = ft_printf("ft_printf = %s\n", str);
	printf("\nnm = %d\n", nm);
	printf("ft = %d\n\n", ft);

	nm = printf("nm_printf = %p\n", &str);
	ft = ft_printf("ft_printf = %p\n", &str);
	printf("\nnm = %d\n", nm);
	printf("ft = %d\n\n", ft);

	nm = printf("nm_printf = %u\n", LONG_MAX);
	ft = ft_printf("ft_printf = %u\n", LONG_MAX);
	printf("\nnm = %d\n", nm);
	printf("ft = %d\n\n", ft);

	nm = printf("nm_printf = x %x %x\n", -155, -42);
	ft = ft_printf("ft_printf = x %x %x\n", -155, -42);
	printf("\nnm = %d\n", nm);
	printf("ft = %d\n\n", ft);

	nm = printf("nm_printf = %X\n", n);
	ft = ft_printf("ft_printf = %X\n", n);
	printf("\nnm = %d\n", nm);
	printf("ft = %d\n\n", ft);

	nm = printf("nm_printf = %%%%%%%%%%\n");
	ft = ft_printf("ft_printf = %%%%%%%%%%\n");
	printf("\nnm = %d\n", nm);
	printf("ft = %d\n\n", ft);
	
	nm = printf("nm_printf = %p\n", NULL);
	ft = ft_printf("ft_printf = %p\n", NULL);
	printf("\nnm = %d\n", nm);
	printf("ft = %d\n\n", ft);
}
