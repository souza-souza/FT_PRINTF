#include "printf.h"

size_t	ft_count(char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}