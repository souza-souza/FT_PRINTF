/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmemads.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 17:06:56 by andede-s          #+#    #+#             */
/*   Updated: 2026/06/16 17:15:48 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putmemads(void *ptr)
{
	int	count;

	if (!ptr)
	{
		write(1, "nil", 3);
		return (3);
	}
	count = 2;
	write(1, "0x", 2);
	count += ft_convert((unsigned long )ptr);
	return (count);
}
/*int main()
{
    char str[] = "vao todos jogar hoje";
    
    printf("%i", ft_putmemads(str));
    return (0);
}*/
