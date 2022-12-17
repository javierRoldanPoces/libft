/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 11:58:48 by jroldan-          #+#    #+#             */
/*   Updated: 2022/12/17 02:00:43 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
/**
 * @date The memset() function fills the first n bytes of the memory area
       pointed to by s with the constant byte c.
 * 
 * @param s puntero al string con el que va a trabajar nuestra función
 * @param c caracter con el que vamos a llenar nustra string
 * @param n numerop de bytes que vamos a sustituir
 * @return void* 
 */
void	*ft_memset(void *s, int c, size_t n)
{
	size_t		i;
	char		*scpy;

	scpy = (char *) s;
	i = 0;
	while (i < n)
	{
		scpy[i] = (char)c;
		i++;
	}
	return (s = scpy);
}
