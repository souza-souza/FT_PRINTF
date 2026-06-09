/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andede-s <andede-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 16:24:12 by andede-s          #+#    #+#             */
/*   Updated: 2026/06/01 16:29:09 by andede-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

//funcs principais

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putint(int n);
void	ft_putunint(int n);
void	ft_puthexalow(int	num);
void	ft_puthexaupp(int	num);
void    ft_putmemads(void *ptr);

//funcs auxiliares

void    ft_convert(unsigned long num);
size_t	ft_count(char const *str);


#endif
