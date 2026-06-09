/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <andede-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 16:22:19 by andede-s          #+#    #+#             */
/*   Updated: 2026/06/01 16:34:35 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	filter_format(char format, va_list lst)
{
	if (format == 'c')
		ft_putchar(va_arg(lst, int));
	else if (format == 's')
		ft_putstr(va_arg(lst, char *));
	else if (format == 'p')
		ft_putmemads(va_arg(lst, void *));
	else if (format == 'd' || format == 'i')
		ft_putint(va_arg(lst, int));
	else if (format == 'u')
		ft_putunint(va_arg(lst, unsigned int));
	else if (format == 'x')
		ft_puthexalow(va_arg(lst, int));
	else if (format == 'X')
		ft_puthexaupp(va_arg(lst, int));
	else if (format == '%')
		ft_putchar('%');
}

int ft_printf(const char *text, ...)
{
	int i;
	char *res;
	int	count;

	i = 0;
	va_list	lst;
	va_start(lst, text);

	while(text[i])
	{
		if(text[i] == '%')
		{
			i++;
			count += filter_format(text[i], lst);
			filter_format(text[i], lst);
			
		}
		else
		{
			count += ft_putchar(text[i]);
			ft_putchar(text[i]);
		}
		i++;
	}
	count = ft_count(res);
	va_end(lst);
	return (count);
}


int main(void)
{
    int ft;
    int std;

    ft = ft_printf("alo maltinha %s %d %c %%\n", "teste", 42, 'A');
    std = printf("alo maltinha %s %d %c %%\n", "teste", 42, 'A');

    printf("ft_printf: %d | printf: %d\n", ft, std);

    return 0;
}
