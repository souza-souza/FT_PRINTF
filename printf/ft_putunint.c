#include "ft_printf.h"

void	ft_putunint(int n)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
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
/*
int	main()
{
	ft_putunint(6867676);
	return (0);
}*/
