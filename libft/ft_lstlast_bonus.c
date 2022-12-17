/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:12:32 by jroldan-          #+#    #+#             */
/*   Updated: 2022/12/16 17:49:56 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @def Funcion para devolver el ultimo nodo de la lista
 * 
 * @param lst lista recibida como parametro
 * @return t_list* puntero al ultimo nodo de la lista
 * @cite iremos recorriendo la lista hasta q lista->next 
 */
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*aux;

	aux = lst;
	if (!lst)
		return (NULL);
	while (aux && aux->next != NULL)
	{	
		aux = aux->next;
	}
	return (aux);
}
