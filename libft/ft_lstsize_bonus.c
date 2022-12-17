/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:19:36 by jroldan-          #+#    #+#             */
/*   Updated: 2022/12/14 18:39:27 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @cite Esta función cuenta el número de nodos de una lista (lst) recibida como
 * 		parámetro.
 * 
 * @param lst puntero al primer nodo de la lista recibida como parámetro
 * @return int Número de nodos de la lista
 */
int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*aux;

	aux = lst;
	count = 0;
	while (aux)
	{
		aux = aux->next;
		count++;
	}
	return (count);
}
