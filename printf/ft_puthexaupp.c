/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexaupp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 17:02:25 by andede-s          #+#    #+#             */
/*   Updated: 2026/06/16 17:29:36 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convertupp(unsigned long num)
{
	char	*base;
	int		count;

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
/*int	main()
{
	printf("%i", ft_puthexaupp(2000));
	return (0);
}*/
