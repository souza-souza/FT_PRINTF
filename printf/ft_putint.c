#include "ft_printf.h"

void	ft_putint(int n)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putint(nb / 10);
		ft_putint(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}
/*int	main()
{
	ft_putint(4363);
	return (0);
}*/
