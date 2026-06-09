#include "ft_printf.h"

void	ft_puthexaupp(int	num)
{
	ft_convert((unsigned long)num);
}
/*int	main()
{
	ft_puthexaupp(255);
	return (0);
}*/