#include "ft_printf.h"

void	ft_putstr(char *str)
{
    if (!str)
        write(1, NULL, 1);
    
    int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}