/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ted-dafi <ted-dafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:18:31 by ted-dafi          #+#    #+#             */
/*   Updated: 2021/12/01 00:14:18 by ted-dafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_putnbr_base(unsigned long a, unsigned long len, char *s);
int		print_hex(unsigned long p, int pointer, int big);
int		check_and_print(char s, va_list p);
int		ft_printf(const char *s, ...);
int		ft_strlen(char *s);
int		charp(int a);
int		strp(char *s);
int		printnum(int c);

#endif