/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:14:48 by jroldan-          #+#    #+#             */
/*   Updated: 2022/12/06 12:52:38 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*scpy;

	scpy = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (scpy[i] == (unsigned char)c)
			return ((void *)&scpy[i]);
		i++;
	}
	return (NULL);
}
/* The memchr() function scans the initial n bytes of the memory
       area pointed to by s for the first instance of c.  Both c and the
       bytes of the memory area pointed to by s are interpreted as
       unsigned char.*/
/* return a pointer to the
       matching byte or NULL if the character does not occur in the
       given memory area.*/