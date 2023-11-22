#include "ft_printf.h"

int	main(void)
{
    char *str = "4242";
    int s = 0;
    int n = 2147483647;

	s = printf("nm_printf = %d\n", n);
    printf("%d\n\n", s);
    s = ft_printf("ft_printf = %d\n", n);
    printf("%d\n\n", s);
}
