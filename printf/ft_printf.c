/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <andede-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 16:22:19 by andede-s          #+#    #+#             */
/*   Updated: 2026/06/16 16:58:08 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	filter_format(char format, va_list *lst)
{
	if (format == 'c')
		return (ft_putchar(va_arg(*lst, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(*lst, char *)));
	else if (format == 'p')
		return (ft_putmemads(va_arg(*lst, void *)));
	else if (format == 'd' || format == 'i')
		return (ft_putint(va_arg(*lst, int)));
	else if (format == 'u')
		return (ft_putunint(va_arg(*lst, unsigned int)));
	else if (format == 'x')
		return (ft_puthexalow(va_arg(*lst, unsigned int)));
	else if (format == 'X')
		return (ft_puthexaupp(va_arg(*lst, unsigned int)));
	else if (format == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *text, ...)
{
	int		i;
	int		count;
	va_list	args;

	if (!text)
		return (0);
	i = 0;
	count = 0;
	va_start(args, text);
	while (text[i])
	{
		if (text[i] == '%' && text[i + 1])
		{
			i++;
			count += filter_format(text[i], &args);
		}
		else if (text[i] == '%' && !text[i + 1])
			break ;
		else
			count += ft_putchar(text[i]);
		i++;
	}
	va_end(args);
	return (count);
}
/*	int main(void)
{
    int ft;
    int std;

    ft = ft_printf("alo maltinha %s %d %c %%\n", "teste", 42, 'A');
    std = printf("alo maltinha %s %d %c %%\n", "teste", 42, 'A');

    printf("ft_printf: %d | printf: %d\n", ft, std);

    return 0;
}*/
