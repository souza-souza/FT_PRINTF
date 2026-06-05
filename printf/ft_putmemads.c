#include "ft_printf.h"

void    ft_convert(unsigned long num)
{
    char *base;

    base = "0123456789abcdef";

    if (num >= 16)
        ft_convert(num / 16);
    ft_putchar(base[num % 16]);
        
}

void    ft_putmemads(void *ptr)
{
    write(1, "0x", 2);
    ft_convert((unsigned long )ptr);
}
/*int main()
{
    char str[] = "vao todos jogar hoje";
    
    ft_putmemads(str);
    return (0);
}*/