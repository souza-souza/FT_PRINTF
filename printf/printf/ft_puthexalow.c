#include "ft_printf.h"

int	ft_puthexalow(int	num)
{
	int	count;

	count = 0;
	count += ft_convert((unsigned long)num);
	return (count);
}
/*int	main()
{
	ft_puthexalow(2000);
	return (0);
}*/
