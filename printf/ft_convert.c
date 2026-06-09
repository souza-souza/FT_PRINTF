#include "ft_printf.h"

void    ft_convert(unsigned long num)
{
    char *base;
	
    base = "0123456789abcdef";
    if (num >= 16)
        ft_convert(num / 16);
    ft_putchar(base[num % 16]);
        
}