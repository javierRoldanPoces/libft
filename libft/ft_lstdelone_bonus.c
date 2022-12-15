/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:08:26 by jroldan-          #+#    #+#             */
/*   Updated: 2022/12/15 13:19:03 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @def Esta función toma como parámetro un nodo lst y libera la memoria del 
 * 	contenido utilizando la funcion "del" recibida como parámetro adedmas libera
 * el nodo (free).La memoria de next no debe liberarse
 * 
 * @param lst Puntero del nodo a liberar 
 * @param del Puntero a la función utilizada para liberar el contenido del nodo
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}
