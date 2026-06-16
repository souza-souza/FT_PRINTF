/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 16:50:42 by andede-s          #+#    #+#             */
/*   Updated: 2026/06/16 16:52:25 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert(unsigned long num)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (num >= 16)
		count += ft_convert(num / 16);
	count += ft_putchar(base[num % 16]);
	return (count);
}
/*int main()
 {
    printf("%i", ft_convert(740));
    return (0);
 }*/
