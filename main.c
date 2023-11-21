#include "ft_printf.h"

int	main(void)
{
    char *str = "4242";
    int s = 0;
    unsigned int n = 42042;

	s = printf("nm_printf = %X\n", n);
    printf("%d\n\n", s);
    s = ft_printf("ft_printf = %X\n", n);
    printf("%d\n\n", s);
}
