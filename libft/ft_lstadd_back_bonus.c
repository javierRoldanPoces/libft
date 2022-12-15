/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:10:25 by jroldan-          #+#    #+#             */
/*   Updated: 2022/12/15 12:57:36 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @def
 *  Añade el nodo new al final de la lista
 * @param lst puntero al primer elemento de la lista donde vamos  añadir el nodo
 * @param new puntero al nodo que vamos a añadir a la lista
 * @cite vamos a reutilizar la función ft_lstlast que nos devuelve el ultimo nodo
 * 		de la lista y ahi sera donde insertaremos el nodo apuntado por new
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	aux = ft_lstlast(*lst);
	if (aux)
		aux->next = new;
	else
		*lst = new;
}
