/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:35:58 by jroldan-          #+#    #+#             */
/*   Updated: 2022/12/17 02:19:26 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @def Reserva con malloc y devuelve una nueva string, formada por la 
 * concatenación de ’s1’ y ’s2’.Devuelve el string nuevo null si falla la 
 * reserva de memoria 
 * 
 * @param s1 -> primera string 
 * @param s2 ->  string destino donde se concatena s1
 * @return char* -> nueva string formada x concatenacion s2 y s1
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	lenght;
	size_t	i;
	size_t	j;

	j = 0;
	i = ft_strlen(s1);
	lenght = ft_strlen(s2) + ft_strlen(s1) + 1;
	s3 = (char *)malloc(lenght);
	if (s3 == NULL)
		return (NULL);
	while (s1[j] != '\0')
	{
		s3[j] = s1[j];
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		s3[j] = s2[i];
		j++;
		i++;
	}
	s3[j] = '\0';
	return (s3);
}
