#include "ft_printf.h"

int	main(void)
{
    char *str = "42\t42";
    int s = 0;
    int n = -42;

	s = printf("nm_printf = %x\n", n);
    printf("%d\n\n", s);
    s = ft_printf("ft_printf = %x\n", n);
    printf("%d\n\n", s);
}
