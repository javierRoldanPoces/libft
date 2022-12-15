/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:22:16 by jroldan-          #+#    #+#             */
/*   Updated: 2022/12/13 12:42:49 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @cite Esta funcion envia el caracter c al file descriptor indicado
 * 
 * @param c caracter a enviar al file descriptor
 * @param fd file descriptor
 * @cite Un file descriptor es un numerito, usualmente no muy alto (int)
 * que representa algo a lo que se puede enviar bytes o desde donde se
 *  pueden leerlos.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
