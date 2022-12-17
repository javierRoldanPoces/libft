/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:51:07 by jroldan-          #+#    #+#             */
/*   Updated: 2022/12/17 02:23:19 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @def Reserva con malloc(3) y devuelve substring de s,la substring empieza 
 * 		desde el indice start, su longitud máx es len.
 * @note ontrolo que si el tam de origen-primera_posicion sea menor que 
 * tamdestino en tal caso el tamaño	tamdestino(len)= tamorigen-primera 
 * posicion si no lo hago no reservo bien la memoria.
 * @param s String desde la que creamos la substring
 * @param start Índice del caracter en s desde el que empezar la substring
 * @param len longitud máxima de la substring
 * @return char* La substring resultante Null si falla la reserva de memoria
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	startcast;
	size_t	tam;

	startcast = (size_t)start;
	tam = 0;
	if (ft_strlen(s) == 0)
		return (ft_strdup(""));
	if (ft_strlen(s) < startcast)
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	substring = (char *)malloc(sizeof(char) * (len + 1));
	if (substring == NULL)
		return (NULL);
	while (tam < len)
	{
		substring[tam] = s[startcast];
		tam++;
		startcast++;
	}
	substring[tam] = '\0';
	return (substring);
}
