#include "ft_printf.h"

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