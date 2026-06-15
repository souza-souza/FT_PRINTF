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

int    ft_convert(unsigned long num)
{
    char *base;
    int  count;
	
    count = 0;
    base = "0123456789abcdef";
    if (num >= 16)
        count += ft_convert(num / 16);
    count += ft_putchar(base[num % 16]);
    return (count);    
}
int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
int	ft_puthexalow(unsigned int num)
{
	int	count;

	count = 0;
	count += ft_convert((unsigned long)num);
	return (count);
}
int    ft_convertupp(unsigned long num)
{
    char *base;
    int  count;
	
    count = 0;
    base = "0123456789ABCDEF";
    if (num >= 16)
        count += ft_convertupp(num / 16);
    count += ft_putchar(base[num % 16]);
    return (count);    
}

int	ft_puthexaupp(unsigned int num)
{
	int	count;

	count = 0;
	count += ft_convertupp((unsigned long)num);
	return (count);
}
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
int    ft_putmemads(void *ptr)
{
	int count;

	if (!ptr)
	{
        write(1, "0x0", 3);
        return (3);
	}

    count = 2;
    write(1, "0x", 2);
    count += ft_convert((unsigned long )ptr);
    return (count);
}
int	ft_putstr(char *str)
{
	int i;

    if (!str)
	{
        write(1, "(null)", 6);
		return(6);
	}

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}
int	ft_putunint(unsigned int n)
{
	long	nb;
	int	count;

	count = 0;
	nb = n;
	if (nb >= 10)
	{
		count += ft_putunint(nb / 10);
		count += ft_putunint(nb % 10);
	}
	else
	{
		count += ft_putchar(nb + '0');
	}
	return (count);
}

int	filter_format(char format, va_list *lst)
{
	if (format == 'c')
		return (ft_putchar(va_arg(*lst, int)));
	else if (format == 's')
		return(ft_putstr(va_arg(*lst, char *)));
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

int ft_printf(const char *text, ...)
{
	int i;
	int	count;
	
	va_list	lst;

	i = 0;
	count = 0;
	va_start(lst, text);

	while(text[i])
	{
		if(text[i] == '%' && text[i + 1])
		{
			i++;
			count += filter_format(text[i], &lst);
		}
		else
			count += ft_putchar(text[i]);
		i++;
	}
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
