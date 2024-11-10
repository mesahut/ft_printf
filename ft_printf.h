/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayilmaz <mayilmaz@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:36:31 by mayilmaz          #+#    #+#             */
/*   Updated: 2024/11/10 19:33:49 by mayilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int	ft_printf(const char *a, ...);
int	ft_putchar(char c);
int	ft_putnbr(long int c);
int	ft_putstr(char *s);
int	ft_hexdecimal(unsigned long int n, char h);
int	ft_adress(unsigned long int c);

#endif