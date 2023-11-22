#include "ft_printf.h"

int	main(void)
{
    char *str = "4242";
    int s = 0;
    int n = 2147483647;

	s = printf("nm_printf = %s\n", (void*)0);
    printf("%d\n\n", s);
    s = ft_printf("ft_printf = %s\n", (void*)0);
    printf("%d\n\n", s);
}
