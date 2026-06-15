#include "ft_printf.h"

int    ft_putmemads(void *ptr)
{
    if (!ptr)
        write(1, "0x0", 3);
        return (3);
    int count;

    count = 2;
    write(1, "0x", 2);
    count += ft_convert((unsigned long )ptr);
    return (count);
}
/*int main()
{
    char str[] = "vao todos jogar hoje";
    
    printf("%i", ft_putmemads(str));
    return (0);
}*/