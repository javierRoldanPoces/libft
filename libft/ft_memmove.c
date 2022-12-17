/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 18:01:06 by jroldan-          #+#    #+#             */
/*   Updated: 2022/12/17 02:16:40 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @def  La función memmove() copia n bytes del área de memoria src al área 
 * 		de memoria dest.  Las áreas de memoria pueden solaparse.
 * 
 * @param dest 
 * @param src 
 * @param n 
 * @return void* La función memmove() devuelve un puntero a dest.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*srccpy;
	char	*destcpy;

	srccpy = (char *) src;
	destcpy = (char *) dest;
	i = 0;
	if (!src && !dest)
		return (NULL);
	if (dest > src)
	{	
		while (n--)
		{
			destcpy[n] = srccpy[n];
		}	
	}
	else
	{
		while (i < n)
		{
			destcpy[i] = srccpy[i];
			i++;
		}
	}
	return (dest);
}
