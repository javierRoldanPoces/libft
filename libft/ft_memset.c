/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 11:58:48 by jroldan-          #+#    #+#             */
/*   Updated: 2022/12/05 19:13:52 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

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

/*linea 18 ->	creo un puntero a char para castear el string recibido como void
 al tipo que necesito 
 linea 20 ->	casteo el puntero (void)	
 */
