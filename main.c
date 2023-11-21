#include "ft_printf.h"

int	main(void)
{
    char *str = "4242";
    int s;

	s = printf("nm_printf = %p\n", &str);
    printf("%d\n\n", s);
    s = ft_printf("ft_printf = %p\n", &str);
    printf("%d\n\n", s);
}
