/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:16:17 by jroldan-          #+#    #+#             */
/*   Updated: 2022/12/13 11:20:12 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @cite Genera un string que representa el valor entero recibido como argumento
 * 			Los números enteros tienen que gestionarse
 * @param n Número entero a convertir 
 * @return char* String que representa el valor entero recibido como argumento
 * @fn countdigit  Función creada pa contar el número de dígitos que tendra n
 * 		recibe un entero y devuelve un size_t que indica el número de digitos 
 * 		que tendra n ( entero que recibe como parametro ft_itoa)
 */

int	countdigit(long n)
{
	int	count;

	count = 0;
	if (n == 0)
	{
		count++;
		return (count);
	}
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	nlong;
	char	*s;
	int		i;

	nlong = n;
	i = countdigit(nlong);
	s = (char *)malloc(sizeof (char) * (i + 1));
	if (s == NULL)
		return (NULL);
	s[i] = '\0';
	i--;
	if (nlong == 0)
		s[0] = '0';
	if (nlong < 0)
	{
		s[0] = '-';
		nlong = nlong * -1;
	}
	while (i >= 0 && nlong != 0)
	{
		s[i] = (nlong % 10) + '0';
		nlong = nlong / 10;
		i--;
	}
	return (s);
}

/* main parea probar q me funciona 
int	main(void)
{
	int	n;

	n = 12;
	printf("\n%s", ft_itoa(n));
	return (0);
}
*/