/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroldan- <jroldan-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:26:04 by jroldan-          #+#    #+#             */
/*   Updated: 2022/12/02 17:56:25 by jroldan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*destcpy;
	char	*srccpy;

	destcpy = (char *) dest;
	srccpy = (char *) src;
	i = 0;
	if (dest == src)
		return (dest);
	while (i < n)
	{
		destcpy[i] = srccpy[i];
		i++;
	}
	return (dest = destcpy);
}
