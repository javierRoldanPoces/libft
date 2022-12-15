/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:48:17 by jroldan-          #+#    #+#             */
/*   Updated: 2022/12/13 13:14:54 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @cite Envía la string s al file descriptor recibido como parámetro
 * seguido de un salto de línea (el salto de linea va destras del string)
 * @param s String a enviar 
 * @param fd File descriptor sobre el que vamos a sopbreescribir
 * @param i de tipo size_t pq vamos a comprarla con lo que nos devuelva ft_strlen
 * que es de tipo size_t, va a ser el contador del bucle y la condicion para
 *  salir de él
 * @return No devuelve nada (void)
 */
void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(s))
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	write(fd, "\n", 1);
}
