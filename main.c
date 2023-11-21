#include "ft_printf.h"

int	main(void)
{
    char *str = "4242";
    int s;

	s = printf("printf = %s\n", str);
    printf("%d\n\n", s);
    s = ft_printf("ft_printf = %s\n", str);
    printf("%d\n\n", s);

}