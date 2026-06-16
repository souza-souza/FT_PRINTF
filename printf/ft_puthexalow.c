/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexalow.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 16:59:09 by andede-s          #+#    #+#             */
/*   Updated: 2026/06/16 17:22:49 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexalow(unsigned int num)
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
