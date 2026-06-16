/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 17:19:32 by andede-s          #+#    #+#             */
/*   Updated: 2026/06/16 17:19:34 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunint(unsigned int n)
{
	long	nb;
	int		count;

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
/*int	main()
{
	printf("%d", ft_putunint(-67));
	return (0);
}*/
