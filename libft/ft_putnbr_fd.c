/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 13:03:03 by jroldan-          #+#    #+#             */
/*   Updated: 2022/12/13 14:18:18 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @cite Envía el número n al file descriptor especificado
 * 
 * @param n Número que enviar 
 * @param fd File descriptor sobre el que vamos a escribir
 * @return void
 */
void	ft_putnbr_fd(int n, int fd)
{
	long	i;

	i = n;
	if (i < 0)
	{
		ft_putchar_fd('-', fd);
		i = i * -1;
	}
	if (i > 9)
	{
		ft_putnbr_fd(i / 10, fd);
		ft_putchar_fd((i % 10) + 48, fd);
	}
	if (i <= 9)
	{
		ft_putchar_fd(i + '0', fd);
	}
}
