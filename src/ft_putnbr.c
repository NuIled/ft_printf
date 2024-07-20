/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:51:18 by aoutifra          #+#    #+#             */
/*   Updated: 2022/11/20 15:02:18 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbr(long i)
{
	int	j;

	j = 0;
	if (i < 0)
	{
		j += ft_putchar ('-');
		i *= -1;
	}
	if (i > 9)
		j += ft_putnbr(i / 10);
	j += ft_putchar(i % 10 + 48);
	return (j);
}
