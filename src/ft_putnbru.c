/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 11:44:06 by aoutifra          #+#    #+#             */
/*   Updated: 2022/11/20 14:57:29 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbru(unsigned int j)
{
	int	i;

	i = 0;
	if (j > 9)
		i += ft_putnbr (j / 10);
	i += ft_putchar (j % 10 + 48);
	return (i);
}
