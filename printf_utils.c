/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ted-dafi <ted-dafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 18:58:35 by ted-dafi          #+#    #+#             */
/*   Updated: 2021/12/01 00:14:19 by ted-dafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	charp(int a)
{
	return (write(1, &a, 1));
}

int	strp(char *s)
{
	if (!s)
		return (write(1, "(null)", 6));
	return (write(1, s, ft_strlen(s)));
}

int	printnum(int c)
{
	long	i;

	i = c;
	if (i < 0)
	{
		i *= -1;
		c = write(1, "-", 1);
	}
	else
		c = 0;
	ft_putnbr_base(i, 10, "0123456789");
	while (i || c == 0)
	{
		i /= 10;
		c++;
	}
	return (c);
}
