/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:38:38 by jroldan-          #+#    #+#             */
/*   Updated: 2022/12/15 19:10:01 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @cite
 * 
 * @param lst 
 * @param f 
 * @param del 
 * @details t_list *aux usado para crear espacio de memory que vamos a 
 * 			ir necesitando * vamos reservando memoria para cada nodo dentro
 * 			 de la iteracion aux = (t_list *)malloc(sizeof(t_list));
 * 
 * @details t_list *dst lista que va a devolver aqui vamos anadiendo cada
 * 			 nuevo nodo 
 * 				ft_lstadd_back(&dst, aux)
 * 			la inicializamos como una lista vacia dst = NULL
 * @cite	linea 41 si no hay espacio de memoria para el nuevo nodo liberamos el
 * 			 nodo y los posteriores de dst
 * @return t_list* 
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dst;
	t_list	*aux;

	dst = NULL;
	while (lst)
	{
		aux = (t_list *)malloc(sizeof(t_list));
		if (!aux)
		{
			ft_lstclear(&dst, del);
			return (NULL);
		}
		aux->content = f(lst->content);
		aux->next = NULL;
		ft_lstadd_back(&dst, aux);
		lst = lst->next;
	}
	return (dst);
}
