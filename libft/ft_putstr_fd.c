/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:35:11 by jroldan-          #+#    #+#             */
/*   Updated: 2022/12/13 12:47:00 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @cite  La función ft_putstr_fd envia la string s al file descriptor 
 * recibido como  parámetro
 * 
 * @param s String a enviar al file descriptor
 * @param fd file descriptor sobre el que la función va a sobreescribir
 * @return La función no tiene ningún valor de retorno
 */
void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(s))
	{
		write(fd, &s[i], 1);
		i++;
	}
}
