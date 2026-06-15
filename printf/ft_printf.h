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

int		ft_printf(const char *text, ...);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putint(int n);
int		ft_putunint(unsigned int n);
int		ft_puthexalow(unsigned int num);
int		ft_puthexaupp(unsigned int num);
int		ft_putmemads(void *ptr);

//funcs auxiliares

int    ft_convert(unsigned long num);


#endif
