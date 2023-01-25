/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 20:50:29 by jroldan-          #+#    #+#             */
/*   Updated: 2023/01/25 17:15:43 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_d_i(int nbr, int *len)
{
	long	i;

	i = nbr;
	if (i < 0)
	{
		ft_putchar('-', len);
		i = i * -1;
	}
	if (i > 9)
	{
		ft_putnbr_d_i(i / 10, len);
		ft_putchar((i % 10) + 48, len);
	}
	if (i <= 9)
	{
		ft_putchar(i + '0', len);
	}
}

void	ft_putnbr_unsigned_d(unsigned int nbr, int *len)
{
	long	i;

	i = nbr;
	if (i < 0)
	{
		ft_putchar('-', len);
		i = i * -1;
	}
	if (i > 9)
	{
		ft_putnbr_d_i(i / 10, len);
		ft_putchar((i % 10) + 48, len);
	}
	if (i <= 9)
	{
		ft_putchar(i + '0', len);
	}
}

void	ft_putnbr_p(unsigned long nbr, char *base, int *len)
{
	unsigned long	size_base;
	long			nbr_final[100];
	int				i;

	i = 0;
	size_base = 0;
	while (base[size_base])
		size_base++;
	if (nbr == 0)
		ft_putchar('0', len);
	while (nbr)
	{
		nbr_final[i] = nbr % size_base;
		nbr = nbr / size_base;
		i++;
	}
	while (--i >= 0)
		ft_putchar(base[nbr_final[i]], len);
}

void	ft_putnbr_hex(unsigned int nbr, char *base, int *len, char *p)
{
	unsigned long	size_base;
	long			nbr_final[100];
	int				i;

	i = 0;
	size_base = 0;
	if (*p == 'X')
		base = "0123456789ABCDEF";
	while (base[size_base])
		size_base++;
	if (nbr == 0)
		ft_putchar('0', len);
	while (nbr)
	{
		nbr_final[i] = nbr % size_base;
		nbr = nbr / size_base;
		i++;
	}
	while (--i >= 0)
		ft_putchar(base[nbr_final[i]], len);
}
