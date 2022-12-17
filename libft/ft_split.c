/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:12:01 by jroldan-          #+#    #+#             */
/*   Updated: 2022/12/17 01:02:49 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/**
 * @date funcion que cuenta el numero de palabras que hay en nuestro string
 * 
 * @param s string que recibe
 * @param c caracter delimitador
 * @return int devuelve el número de palabras
 */
static int	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
			{
				i++;
			}
		}
		else
			i++;
	}
	return (count);
}

/**
 * @cite Funcion que recorre el string eliminando la memoria reservada
 * 
 * @param str string 
 * @param i posicion donde ha falladao la reserva de memoria para ir liberandola
 * 			en las posiciones anteriores empieza decrementando el contador ya que 
 * @return char** 
 */
static	char	**free_memory(char **str, unsigned int i)
{
	while (i > 0)
	{
		i--;
		free(str[i]);
	}
	free(str);
	return (0);
}

static char	**limit_word(char *aux, char **str, char c)
{
	unsigned int	j;
	unsigned int	i;

	i = 0;
	while (*aux)
	{
		if (*aux != c)
		{
			j = 0;
			while (*aux && *aux != c)
			{
				j++;
				aux++;
			}
			str[i++] = ft_substr(aux - j, 0, j);
			if (!str[i - 1])
				return (free_memory(str, i));
		}
		else
			aux++;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char			**str;
	char			*aux;

	aux = (char *)s;
	str = (char **)ft_calloc(count_words(aux, c) + 1, sizeof(char *));
	if (str == NULL)
		return (NULL);
	return (limit_word(aux, str, c));
}
/*
int	main(void)
{
	char	a[60] = ",,hola,paco,,juan,,,";
	char	*s;
	int		n;
	char	c;

	c = ',';
	n = 0;
	s = &a[0];
	n = split(a, c);
	printf("%i\n", n);
}
*/