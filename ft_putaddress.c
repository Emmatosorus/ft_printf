#include "ft_printf.h"

char	hex_digit(int v)
{
	if (v >= 0 && v < 10)
		return ('0' + v);
	else
		return ('a' + v - 10);
}

int	ft_putaddress(void *ptr, int wcount)
{
	long 			i;
	unsigned long	nptr;

	nptr = (unsigned long)ptr;
	i = (sizeof(nptr) << 3) - (2 << 3) - 4;
	while (i >= 0)
	{
		wcount += ft_putchar(hex_digit((nptr >> i) & 0xf));
		i -= 4;
	}
	return (wcount);
}

// char				*hexbase;
// unsigned long long	nb;

// nb = (unsigned long long)ptr;
// hexbase = "0123456789abcdef";
// if (nb < 16)
// 	wcount += ft_putchar(hexbase[nb]);
// else
// {
// 	wcount += ft_putvoid((void *)(nb / 16), wcount);
// 	wcount += ft_putchar(nb % 16);
// }
// printf("\nwcount = %d\n", wcount);
// return (wcount);