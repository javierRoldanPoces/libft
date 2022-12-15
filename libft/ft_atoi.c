/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 23:05:22 by jroldan-          #+#    #+#             */
/*   Updated: 2022/12/08 00:39:57 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @file ft_atoi.c
 * @author your name (you@domain.com)
 * @def convierte la porcion inicial de la cadena apuntada por str a int.
 * 		Atoi no detecta errores
 * @param *str
 * @return devuelve un int que es el valor convertido
 * @var guardamos por un lado sign y por otro lado result obtenido multiplicando
 *  x 10  y restandole 48
 */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;
	int	i;

	sign = 1;
	result = 0;
	i = 0;
	if (str[i] == '\0')
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == 45 || str[i] == 43)
	{	
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10;
		result = result + (str[i] - 48);
		i++;
	}
	return (result * sign);
}
