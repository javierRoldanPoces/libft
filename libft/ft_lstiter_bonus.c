/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:19:49 by jroldan-          #+#    #+#             */
/*   Updated: 2022/12/15 17:36:28 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @def recorre la lista lst aplicando la funcion f recibida al contenido de
 * 		todos los nodos de la lista
 * @param lst 
 * @param f 
 * @note le pasamos a la función lst->content ya que si le pasamos el nodo le 
 * estariamos pasando dos parametros (content y *next)
 *  */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}
