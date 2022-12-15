/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:22:06 by jroldan-          #+#    #+#             */
/*   Updated: 2022/12/15 17:12:02 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @def Esta funcion elimina y libera el nodo lst y todos los posteriores
 * 		utilizando la funcion recibida como parametro del y free. Al final el 
 * 		 puntero a la lista debe ser NULL.
 * 
 * @param lst  direccion del puntero al nodo que vamos a eliminar
 * @param del puntero a la función que vamos a utilizar
 * @return No devuelve nada
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	aux = *lst;
	if (*lst)
	{
		while (*lst)
		{
			aux = aux->next;
			ft_lstdelone(*lst, del);
			*lst = aux;
		}
	}
	*lst = NULL;
}
