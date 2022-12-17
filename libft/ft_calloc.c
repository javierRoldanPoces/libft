/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:19:19 by jroldan-          #+#    #+#             */
/*   Updated: 2022/12/17 02:08:33 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @cite calloc() asigna memoria para una matriz de n elementos de size bytes 
 * 			cada uno y devuelve un puntero a la memoria asignada.
 * 			La memoria es puesta a cero. 
 * @param count indica el número de datos para el que se va a reservar memoria
 * @param size ndica el número de bytes que ocupara un dato
 * @return void* 
 */
void	*ft_calloc(size_t count, size_t size)
{
	void	*c;

	c = malloc(count * size);
	if (c == NULL)
		return (NULL);
	ft_bzero(c, count * size);
	return (c);
}
// size i
// count 
// 
// 