/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:54:10 by jroldan-          #+#    #+#             */
/*   Updated: 2022/12/17 02:18:36 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @def La función strdup() devuelve un puntero a la cadena duplicada, o NULL si 
		no había bastante memoria La memoria para la nueva cadena se obtiene 
		automáticamente con malloc(3) y puede(y debe) liberarse con free
 * 
 * @param s 
 * @return char* Devuelve un puntero a una nueva cadena de caracteres que
 *  es un duplicado de la cadena apuntada por s.
 */
char	*ft_strdup(const char *s)
{
	char	*cpys;
	char	*d;

	cpys = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (cpys == NULL)
		return (NULL);
	d = (char *)s;
	ft_strlcpy(cpys, d, ft_strlen(s)+1);
	return (cpys);
}
