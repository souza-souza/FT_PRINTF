#include "ft_printf.h"

int	ft_putint(int n)
{
	long	nb;
	int	count;

	count = 0;
	nb = n;
	if (nb < 0)
	{
		count += ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		count += ft_putint(nb / 10);
		count += ft_putint(nb % 10);
	}
	else
	{
		count += ft_putchar(nb + '0');
	}
	return (count);
}
/*int	main()
{
	printf("%i", ft_putint(34));
	return (0);
}*/
