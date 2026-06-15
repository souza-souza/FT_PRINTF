#include "ft_printf.h"

int    ft_convertupp(unsigned long num)
{
    char *base;
    int  count;
	
    count = 0;
    base = "0123456789ABCDEF";
    if (num >= 16)
        count += ft_convertupp(num / 16);
    count += ft_putchar(base[num % 16]);
    return (count);    
}

int	ft_puthexaupp(int	num)
{
	int	count;

	count = 0;
	count += ft_convertupp((unsigned long)num);
	return (count);
}
/*int	main()
{
	printf("%i", ft_puthexaupp(2000));
	return (0);
}*/