/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:07:09 by jroldan-          #+#    #+#             */
/*   Updated: 2022/12/17 02:03:08 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @cite similar a memset pero rellena con 0
 * 
 * @param s 
 * @param n 
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
