/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:52:48 by jroldan-          #+#    #+#             */
/*   Updated: 2022/12/07 16:51:19 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief 
 * 
 * @param s1 
 * @param s2 
 * @param n 
 * @return int 
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1cpy;
	unsigned char	*s2cpy;

	i = 0;
	s1cpy = (unsigned char *)s1;
	s2cpy = (unsigned char *)s2;
	while (i < n)
	{
		if (*s1cpy != *s2cpy)
			return (*s1cpy - *s2cpy);
		i++;
		s1cpy++;
		s2cpy++;
	}
	return (0);
}

//memcmp - compara areas de memoria
//La funcion memcmp() compara los primeros
//n bytes de las areas de memoria s1 y s2. Devuelve
//un entero menor, igual a o mayor que cero si s1 es, respectivamente,
// menor, igual o mayor que s2*
/*La funcion memcmp() devuelve un entero menor,
 igual o mayor que cero si s1 es, respectiva‐
mente, menor, igual o mayor que s2.*/