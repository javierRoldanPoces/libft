/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:10:35 by jroldan-          #+#    #+#             */
/*   Updated: 2022/12/14 19:35:48 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @cite Esta funcion crea un nuevo nodo usando malloc()la variable content se
 * 		inicializa con el contenido del param content y la variable next como NULL
 * 
 * @param content El contenido que va a tener el nuevo nodo
 * @return void* Devuelve el nuevo Nodo
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*aux;

	aux = malloc(sizeof(t_list));
	if (!aux)
		return (0);
	aux->content = content;
	aux->next = NULL;
	return (aux);
}
