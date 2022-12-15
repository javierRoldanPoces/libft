/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:00:10 by jroldan-          #+#    #+#             */
/*   Updated: 2022/12/13 11:25:20 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @cite A cada caracter de la string s aplica la función f 
 * 
 * @param s String que itrerar 
 * @param f funcion pasada como parametro que a su vez recibe el índice
 * de cada caracter dentro de s y la direccion de del propio caracter que podra 
 * modificarse si es necesario.
 * @return Mo retorna nada (void)
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(s))
	{
		f(i, &s[i]);
		i++;
	}
}
