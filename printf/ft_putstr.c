#include "ft_printf.h"

int	ft_putstr(char *str)
{
    if (!str)
	{
        write(1, "(null)", 6);
		return (6);
	}
    
    int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}
/*int	main()
{
	char str [] = "alo gente bonita";
	printf("%d", ft_putstr(str));
	return (0);
}*/