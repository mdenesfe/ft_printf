/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemir <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:47:12 by mdemir            #+#    #+#             */
/*   Updated: 2022/05/16 14:47:14 by mdemir           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
int	choose(char c, va_list a);
int	ft_putchar(char a);
int	ft_putstr(char *str);
int	ft_putadd(unsigned long add);
int	ft_putnbr_hex(unsigned int nbr, char c);
int	ft_putnbr_unsigned(unsigned int nbr);
int	ft_putnbr(int nbr);

#endif
