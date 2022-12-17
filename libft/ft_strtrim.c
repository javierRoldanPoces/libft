/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:12:39 by jroldan-          #+#    #+#             */
/*   Updated: 2022/12/16 18:13:28 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @param s1 string que debe ser recortada por ambos extremos quitando las 
 * 			coincidencias de set
 * @param set los caracteres a eliminar de la string
 * @return char* 
 * @details elimina las coincidencias de set desde ambos extremos de s1 hasta 
 * 			encontrar un caracter no perteneciente a set
 * @return una string char * reservada con malloc
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i > 0 && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
